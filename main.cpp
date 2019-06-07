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
    graph.add_kante(0, 1);
    graph.add_kante(1, 2);
    graph.add_kante(1, 4);
    graph.add_kante(3, 4);

//    Adjazenzmatrix adjazenzmatrix{graph};
//    adjazenzmatrix.print();
//    adjazenzmatrix.to_graphviz();

//    Inzidenzmatrix inzidenzmatrix{graph};
//    inzidenzmatrix.print();
//    inzidenzmatrix.to_graphviz();
//
//    Kantentabelle kantentabelle{graph};
//    kantentabelle.print();
//    kantentabelle.to_graphviz();

//    Adjazenzmatrix adjazenzmatrix{graph};
//    Inzidenzmatrix inzidenzmatrix = Converter::adjazenzmatrix_to_inzidenzmatrix(adjazenzmatrix);
//    inzidenzmatrix.print();
//    Kantentabelle kantentabelle = Converter::adjazenzmatrix_to_kantentabelle(adjazenzmatrix);
//    kantentabelle.print();

//    Inzidenzmatrix inzidenzmatrix{graph};
//    Adjazenzmatrix adjazenzmatrix = Converter::inzidenzmatrix_to_adjazenzmatrix(inzidenzmatrix);
//    adjazenzmatrix.print();
//    Kantentabelle kantentabelle = Converter::inzidenzmatrix_to_kantentabelle(inzidenzmatrix);
//    kantentabelle.print();

    Kantentabelle kantentabelle{graph};
//    Adjazenzmatrix adjazenzmatrix = Converter::kantentabelle_to_adjazenzmatrix(kantentabelle);
//    adjazenzmatrix.print();
    Inzidenzmatrix inzidenzmatrix = Converter::kantentabelle_to_inzidenzmatrix(kantentabelle);
    inzidenzmatrix.print();




    return 0;
}