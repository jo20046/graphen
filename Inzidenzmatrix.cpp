//
// Created by Enthöfer Joshua on 2019-06-06.
//

#include <iostream>
#include <fstream>
#include "Inzidenzmatrix.h"

Inzidenzmatrix::Inzidenzmatrix(Graph graph) {

    this->graph_ = graph;

    for (int i = 0; i < graph.get_anzahl_knoten(); i++) {
        std::vector<int> neue_zeile;
        neue_zeile.reserve(graph.get_anzahl_knoten());
        for (int j = 0; j < graph.get_anzahl_kanten(); j++) {
            neue_zeile.push_back(0);
        }
        matrix_.push_back(neue_zeile);
    }

    for (int i = 0; i < graph.get_anzahl_knoten(); i++) {
        for (int j = 0; j < graph.get_anzahl_kanten(); j++) {
            if (graph.kante_enthaelt_knoten(j, i)) {
                matrix_.at(i).at(j) = 1;
            }
        }
    }

}

void Inzidenzmatrix::print() {
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

void Inzidenzmatrix::to_graphviz() {
    std::ofstream out;
    out.open("aus_inzidenz.gv");
    out << "graph {" << std::endl;
    for (int i = 0; i < matrix_.size(); i++) {
        out << "  v" << i << std::endl;
    }
    for (int i = 0; i < breite_(); i++) {
        int start = -1;
        int ende = -1;
        for (int j = 0; j < matrix_.size(); j++) {
            if (matrix_.at(j).at(i) == 1) {
                if (start < 0) {
                    start = j;
                } else {
                    ende = j;
                    break;
                }
            }
        }
        out << "  v" << start << " -- v" << ende << std::endl;
    }
    out << '}';
    out.close();
}

int Inzidenzmatrix::breite_() {
    return matrix_.empty() ? 0 : matrix_.at(0).size();
}

Graph Inzidenzmatrix::get_graph() {
    return this->graph_;
}
