//
// Created by Enthöfer Joshua on 2019-06-06.
//

#include <fstream>
#include <iostream>
#include "Kantentabelle.h"

Kantentabelle::Kantentabelle(Graph *graph) {

    this->graph_ = *graph;

    for (int i = 0; i < graph->get_anzahl_kanten(); i++) {
        std::vector<int> neuer_eintrag = {i};
        std::vector<int> verbindung = graph->get_kante(i);
        neuer_eintrag.insert(neuer_eintrag.end(), verbindung.begin(), verbindung.end());
        tabelle_.push_back(neuer_eintrag);
    }

}

void Kantentabelle::to_graphviz() {
    std::ofstream out;
    out.open("aus_kantentabelle.gv");
    out << "graph {" << std::endl;
    for (auto &zeile : tabelle_) {
        out << "  v" << zeile.at(1) << " -- v" << zeile.at(2) << std::endl;
    }
    out << '}' << std::endl;
    out.close();
}

void Kantentabelle::print() {
    for (auto &zeile : tabelle_) {
        std::cout << zeile.at(0) << ' ' << zeile.at(1) << ' ' << zeile.at(2) << std::endl;
    }
}

Graph Kantentabelle::get_graph() {
    return this->graph_;
}
