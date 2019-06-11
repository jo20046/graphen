#include <iostream>
#include "Graph.h"
#include "Adjazenzmatrix.h"
#include "Kantentabelle.h"
#include "Inzidenzmatrix.h"
#include "Converter.h"
#include "VollstaendigerGraph.h"
#include "VerbundenerGraph.h"
#include "Komponentengraph.h"

int main() {


    Graph graph;
    graph.add_knoten(0);
    graph.add_knoten(1);
    graph.add_knoten(2);
    graph.add_knoten(3);
    graph.add_kante(0, 1);
    graph.add_kante(0, 2);
    graph.add_kante(1, 2);

//    VerbundenerGraph verbunderGraph{15};
//    Kantentabelle k{&verbunderGraph};
//    k.to_graphviz();

    VollstaendigerGraph vollstaendigerGraph{7};
    Kantentabelle k2{&vollstaendigerGraph};
    k2.to_graphviz();

//    Komponentengraph komponentengraph{10, 14};
//    Kantentabelle k3{&komponentengraph};
//    k3.to_graphviz();

    bool b = graph.is_verbunden();
    std::cout << b;

    return 0;
}