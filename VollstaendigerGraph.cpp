//
// Created by Enthöfer Joshua on 2019-06-07.
//

#include "VollstaendigerGraph.h"

VollstaendigerGraph::VollstaendigerGraph(int groesse) {
    this->groesse_ = groesse;
    for (int i = 0; i < groesse; i++) {
        this->add_knoten(i);
    }
    for (int i = 0; i < groesse; i++) {
        for (int j = i + 1; j < groesse; j++) {
            this->add_kante(i, j);
        }
    }

}
