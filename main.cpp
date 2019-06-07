#include <iostream>
#include "Graph.h"
#include "Adjazenzmatrix.h"
#include "Kantentabelle.h"
#include "Inzidenzmatrix.h"
#include "Converter.h"
#include "VollstaendigerGraph.h"

int main() {


    Graph graph;
    graph.add_knoten(0);
    graph.add_knoten(1);
    graph.add_knoten(2);
    graph.add_kante(0, 1);
    graph.add_kante(0, 2);
//    graph.add_kante(1, 2);

    VollstaendigerGraph vollstaendigerGraph{3};
    bool b1 = graph.is_vollstaendig();
    bool b2 = vollstaendigerGraph.is_vollstaendig();
    std::cout << b1 << std::endl << b2;

    Adjazenzmatrix a{&vollstaendigerGraph};
    Inzidenzmatrix i{&vollstaendigerGraph};
    Kantentabelle k = Converter::adjazenzmatrix_to_kantentabelle(a);


    return 0;
}