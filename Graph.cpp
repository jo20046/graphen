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
