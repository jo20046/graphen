#include <iostream>
#include "Graph.h"
#include "Adjazenzmatrix.h"
#include "Kantentabelle.h"
#include "Inzidenzmatrix.h"
#include "Converter.h"
#include "VollstaendigerGraph.h"
#include "VerbundenerGraph.h"
#include "Komponentengraph.h"
#include "BipartiterGraph.h"

//void print_komponenten(std::vector<std::vector<int>> k) {
//    for (auto &komponente : k) {
//        for (int knoten : komponente) {
//            std::cout << knoten << ", ";
//        }
//        std::cout << std::endl;
//    }
//    std::cout << std::endl;
//}

int main() {


    Graph graph;
    graph.add_knoten(0);
    graph.add_knoten(1);
    graph.add_knoten(2);
    graph.add_knoten(3);
    graph.add_knoten(4);
    graph.add_knoten(5);
    graph.add_knoten(6);
    graph.add_knoten(7);
    graph.add_kante(0, 3);
    graph.add_kante(0, 5);
    graph.add_kante(1, 4);
    graph.add_kante(1, 6);
    graph.add_kante(2, 5);
    graph.add_kante(2, 7);
    graph.add_kante(3, 6);
    graph.add_kante(4, 7);


    Adjazenzmatrix adjazenzmatrix{&graph};
    adjazenzmatrix.to_graphviz();
    std::cout << "Offener Eulerzug: " << graph.is_offener_eulerzug() << std::endl << "Geschlossener Eulerzug: "
              << graph.is_geschlossener_eulerzug() << std::endl;

    return 0;
}