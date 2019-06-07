//
// Created by Enthöfer Joshua on 2019-06-06.
//

#ifndef ADJAZENZ_INZIDENZ_KANTENTABELLE_INZIDENZMATRIX_H
#define ADJAZENZ_INZIDENZ_KANTENTABELLE_INZIDENZMATRIX_H


#include "Graph.h"

class Inzidenzmatrix {

public:
    explicit Inzidenzmatrix(Graph *graph);

    void print();

    void to_graphviz();

    Graph get_graph();

private:
    int breite_();

    Graph graph_;
    std::vector<std::vector<int>> matrix_;

};


#endif //ADJAZENZ_INZIDENZ_KANTENTABELLE_INZIDENZMATRIX_H
