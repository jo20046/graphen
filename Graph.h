//
// Created by Enthöfer Joshua on 2019-06-06.
//

#ifndef ADJAZENZ_INZIDENZ_KANTENTABELLE_GRAPH_H
#define ADJAZENZ_INZIDENZ_KANTENTABELLE_GRAPH_H


#include <vector>

class Graph {

public:
//    static Graph erstelle_vollstaengiger_graph(int groesse);
    void add_knoten(int neuer_knoten);

    void add_kante(int von, int nach);

    int get_knoten(int index);

    std::vector<int> get_kante(int index);

    int get_anzahl_knoten();

    int get_anzahl_kanten();

    bool hat_verbindung(int start, int ziel);

    bool kante_enthaelt_knoten(int kante, int knoten);

    bool is_vollstaendig();

    bool is_verbunden();

    std::vector<std::vector<int>> komponenten();


protected:
    std::vector<int> knoten_;
    std::vector<std::vector<int>> kanten_;

    void get_komponente_R(int aktueller_knoten, std::vector<int> &komponente);

    std::vector<int> get_nachbarn(int knoten);

    void elemente_aus_vector_entfernen(const std::vector<int> &elemente, std::vector<int> &vec);

private:

};


#endif //ADJAZENZ_INZIDENZ_KANTENTABELLE_GRAPH_H
