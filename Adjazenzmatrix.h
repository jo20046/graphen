//
// Created by Enthöfer Joshua on 2019-06-06.
//

#ifndef ADJAZENZ_INZIDENZ_KANTENTABELLE_ADJAZENZMATRIX_H
#define ADJAZENZ_INZIDENZ_KANTENTABELLE_ADJAZENZMATRIX_H


#include <vector>
#include "Graph.h"

class Adjazenzmatrix {

public:
    explicit Adjazenzmatrix(Graph graph);

    void print();
    void to_graphviz();


private:
    std::vector<std::vector<int>> matrix_;

};


#endif //ADJAZENZ_INZIDENZ_KANTENTABELLE_ADJAZENZMATRIX_H
