//
// Created by Enthöfer Joshua on 2019-06-06.
//

#ifndef ADJAZENZ_INZIDENZ_KANTENTABELLE_KANTENTABELLE_H
#define ADJAZENZ_INZIDENZ_KANTENTABELLE_KANTENTABELLE_H


#include "Graph.h"

class Kantentabelle {

public:
    explicit Kantentabelle(Graph *graph);

    void to_graphviz();

    void print();

    Graph get_graph();

private:
    Graph graph_;
    std::vector<std::vector<int>> tabelle_;
};


#endif //ADJAZENZ_INZIDENZ_KANTENTABELLE_KANTENTABELLE_H
