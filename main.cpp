#include <iostream>
#include "Graph.h"
#include "Adjazenzmatrix.h"
#include "Kantentabelle.h"
#include "Inzidenzmatrix.h"

int main() {


    Graph graph;
    graph.add_knoten(0);
    graph.add_knoten(1);
    graph.add_knoten(2);
    graph.add_knoten(3);
    graph.add_knoten(4);
    graph.add_kante(0, 1);
    graph.add_kante(1, 2);
    graph.add_kante(1, 4);
    graph.add_kante(3, 4);
    graph.add_kante(4, 4);

    Adjazenzmatrix adjazenzmatrix{graph};
    adjazenzmatrix.print();
    adjazenzmatrix.to_graphviz();

//    Inzidenzmatrix inzidenzmatrix{graph};
//    inzidenzmatrix.print();
//    inzidenzmatrix.to_graphviz();
//
//    Kantentabelle kantentabelle{graph};
//    kantentabelle.print();
//    kantentabelle.to_graphviz();



    return 0;
}