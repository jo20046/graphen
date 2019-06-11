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
    graph.add_kante(0, 1);
    graph.add_kante(0, 2);
    graph.add_kante(3, 4);

    BipartiterGraph bipartiterGraph{3, 4};
    Adjazenzmatrix adjazenzmatrix{&bipartiterGraph};
    adjazenzmatrix.to_graphviz();

    return 0;
}