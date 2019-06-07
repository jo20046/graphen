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
    graph.add_knoten(3);
    graph.add_kante(0, 1);
    graph.add_kante(0, 2);
    graph.add_kante(1, 2);

    bool b = graph.is_verbunden();
    std::cout << b;

    return 0;
}