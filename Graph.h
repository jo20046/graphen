//
// Created by Enthöfer Joshua on 2019-06-06.
//

#ifndef ADJAZENZ_INZIDENZ_KANTENTABELLE_GRAPH_H
#define ADJAZENZ_INZIDENZ_KANTENTABELLE_GRAPH_H


#include <vector>

class Graph {

public:
    void add_knoten(int neuer_knoten);

    void add_kante(int von, int nach);

    int get_knoten(int index);

    std::vector<int> get_kante(int index);

    int get_anzahl_knoten();

    int get_anzahl_kanten();

    bool hat_verbindung(int start, int ziel);

    bool kante_enthaelt_knoten(int kante, int knoten);

private:
    std::vector<int> knoten_;
    std::vector<std::vector<int>> kanten_;

};


#endif //ADJAZENZ_INZIDENZ_KANTENTABELLE_GRAPH_H