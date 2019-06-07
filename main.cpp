#include <iostream>
#include "Graph.h"
#include "Adjazenzmatrix.h"
#include "Kantentabelle.h"
#include "Inzidenzmatrix.h"
#include "Converter.h"

int main() {


    Graph graph;
    graph.add_knoten(0);
    graph.add_knoten(1);
    graph.add_knoten(2);
    graph.add_knoten(3);
    graph.add_knoten(4);
    graph.add_knoten(5);
    graph.add_knoten(6);
    graph.add_kante(0, 1);
    graph.add_kante(0, 5);
    graph.add_kante(1, 2);
    graph.add_kante(1, 4);
    graph.add_kante(1, 5);
    graph.add_kante(2, 6);
    graph.add_kante(3, 4);
    graph.add_kante(4, 6);

    Adjazenzmatrix adjazenzmatrix{graph};
    Inzidenzmatrix inzidenzmatrix = Converter::adjazenzmatrix_to_inzidenzmatrix(adjazenzmatrix);
    Kantentabelle kantentabelle = Converter::adjazenzmatrix_to_kantentabelle(adjazenzmatrix);
    adjazenzmatrix.to_graphviz();
    inzidenzmatrix.to_graphviz();
    kantentabelle.to_graphviz();



    return 0;
}