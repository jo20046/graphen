//
// Created by Enthöfer Joshua on 2019-06-06.
//

#include "Graph.h"

void Graph::add_knoten(int neuer_knoten) {
    if (std::find(knoten_.begin(), knoten_.end(), neuer_knoten) != knoten_.end()) {
        throw std::runtime_error("Knoten existiert bereits");
    } else {
        knoten_.push_back(neuer_knoten);
    }
}

void Graph::add_kante(int von, int nach) {
    bool existiertSchon = false;
    for (int i = 0; i < get_anzahl_kanten(); i++) {
        if ((kanten_.at(i).at(0) == von && kanten_.at(i).at(1) == nach) ||
            (kanten_.at(i).at(1) == von && kanten_.at(i).at(0) == nach)) {
            existiertSchon = true;
        }
    }
    if (existiertSchon) {
        throw std::runtime_error("Kante existiert bereits");
    } else if (!(std::find(knoten_.begin(), knoten_.end(), von) != knoten_.end()) ||
               !(std::find(knoten_.begin(), knoten_.end(), nach) != knoten_.end())) {
        throw std::runtime_error("Einer der angegebenen Knoten existiert im Graph nicht");
    } else {
        kanten_.push_back({von, nach});
    }
}

int Graph::get_anzahl_knoten() {
    return knoten_.size();
}

int Graph::get_anzahl_kanten() {
    return kanten_.size();
}

bool Graph::hat_verbindung(int start, int ziel) {
    for (int i = 0; i < get_anzahl_kanten(); i++) {
        if ((kanten_.at(i).at(0) == start && kanten_.at(i).at(1) == ziel) ||
            (kanten_.at(i).at(1) == start && kanten_.at(i).at(0) == ziel)) {
            return true;
        }
    }
    return false;
}

int Graph::get_knoten(int index) {
    return knoten_.at(index);
}

std::vector<int> Graph::get_kante(int index) {
    return kanten_.at(index);
}

bool Graph::kante_enthaelt_knoten(int kante, int knoten) {
    return kanten_.at(kante).at(0) == knoten || kanten_.at(kante).at(1) == knoten;
}

bool Graph::is_vollstaendig() {
    for (int i = 0; i < knoten_.size(); i++) {
        for (int j = i + 1; j < knoten_.size(); j++) {
            if (!hat_verbindung(knoten_.at(i), knoten_.at(j))) {
                return false;
            }
        }
    }
    return true;
}

bool Graph::is_verbunden() {
    std::vector<int> gefundene_knoten;
    int aktueller_knoten = knoten_.at(0);
    get_komponente_R(aktueller_knoten, gefundene_knoten);
    return knoten_ == gefundene_knoten;
}

void Graph::get_komponente_R(int aktueller_knoten, std::vector<int> &komponente) {

    // Rekursionsanker: Nur ausführen, wenn der aktuelle_knoten noch nicht unter den gefundenen_knoten enthalten ist
    if (!(std::find(komponente.begin(), komponente.end(), aktueller_knoten) != komponente.end())) {
        komponente.push_back(aktueller_knoten);
        std::vector<int> nachbarn = get_nachbarn(aktueller_knoten);
        for (int nachbar : nachbarn) {
            get_komponente_R(nachbar, komponente); // rekursiver Aufruf
        }
    }
}

std::vector<int> Graph::get_nachbarn(int knoten) {
    std::vector<int> ergebnis;
    for (auto &kante : kanten_) {
        int start = kante.at(0);
        int ziel = kante.at(1);
        if (start == knoten) {
            ergebnis.push_back(ziel);
        } else if (ziel == knoten) {
            ergebnis.push_back(start);
        }
    }
    return ergebnis;
}

std::vector<std::vector<int>> Graph::komponenten() {
    std::vector<std::vector<int>> ergebnis;
    std::vector<int> knoten_copy{knoten_};
    while (!knoten_copy.empty()) {
        std::vector<int> komponente;
        int aktueller_knoten = knoten_copy.at(0);
        get_komponente_R(aktueller_knoten, komponente);
        ergebnis.push_back(komponente);
        elemente_aus_vector_entfernen(komponente, knoten_copy);
    }
    return ergebnis;
}

void Graph::elemente_aus_vector_entfernen(const std::vector<int> &elemente, std::vector<int> &vec) {
    for (int e : elemente) {
        for (int j = 0; j < vec.size(); j++) {
            if (e == vec.at(j)) {
                vec.erase(vec.begin() + j);
                break;
            }
        }
    }
}


