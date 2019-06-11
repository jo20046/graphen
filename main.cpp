#include <iostream>
#include "Graph.h"
#include "Adjazenzmatrix.h"
#include "Kantentabelle.h"
#include "Inzidenzmatrix.h"
#include "Converter.h"
#include "VollstaendigerGraph.h"
#include "VerbundenerGraph.h"


int main() {


    Graph graph;
    graph.add_knoten(0);
    graph.add_knoten(1);
    graph.add_knoten(2);
    graph.add_kante(0, 1);
//    graph.add_kante(0, 2);

//    VerbundenerGraph verbunderGraph{5};
//    Kantentabelle k{&verbunderGraph};
//    k.to_graphviz();
//
//    VollstaendigerGraph vollstaendigerGraph{4};
//    Kantentabelle k2{&vollstaendigerGraph};
//    k2.to_graphviz();


    Adjazenzmatrix adjazenzmatrix{&graph};
    adjazenzmatrix.to_graphviz();
    bool b = graph.is_verbunden();
    std::cout << b;

    return 0;
}