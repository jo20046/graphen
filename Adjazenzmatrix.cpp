//
// Created by Enthöfer Joshua on 2019-06-06.
//

#include <iostream>
#include <fstream>
#include "Adjazenzmatrix.h"

Adjazenzmatrix::Adjazenzmatrix(Graph graph) {

    this->graph_ = graph;

    for (int i = 0; i < graph.get_anzahl_knoten(); i++) {
        std::vector<int> neue_zeile;
        neue_zeile.reserve(graph.get_anzahl_knoten());
        for (int j = 0; j < graph.get_anzahl_knoten(); j++) {
            neue_zeile.push_back(0);
        }
        matrix_.push_back(neue_zeile);
    }

    for (int i = 0; i < graph.get_anzahl_knoten(); i++) {
        for (int j = 0; j < graph.get_anzahl_knoten(); j++) {
            if (graph.hat_verbindung(graph.get_knoten(i), graph.get_knoten(j))) {
                matrix_.at(i).at(j) = 1;
            }
        }
    }
}

void Adjazenzmatrix::print() {
    for (int i = 0; i < matrix_.size(); i++) {
        for (int j = 0; j < matrix_.at(i).size(); j++) {
            if (j != 0) {
                std::cout << ' ';
            }
            std::cout << matrix_.at(i).at(j);
        }
        std::cout << std::endl;
    }
}

void Adjazenzmatrix::to_graphviz() {
    std::ofstream out;
    out.open("aus_adjazenz.gv");
    out << "graph {" << std::endl;
    for (int i = 0; i < matrix_.size(); i++) {
        out << "  v" << i << std::endl;
    }
    for (int i = 0; i < matrix_.size(); i++) {
        for (int j = i; j < matrix_.at(i).size(); j++) {
            if (matrix_.at(i).at(j) == 1) {
                out << "  v" << i << " -- v" << j << std::endl;
            }
        }
    }
    out << '}' << std::endl;
    out.close();
}

Graph Adjazenzmatrix::get_graph() {
    return this->graph_;
}
