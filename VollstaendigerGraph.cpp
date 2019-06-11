//
// Created by Enthöfer Joshua on 2019-06-07.
//

#include "VollstaendigerGraph.h"

VollstaendigerGraph::VollstaendigerGraph(int groesse) {
    this->groesse_ = groesse;
    for (int i = 0; i < groesse_; i++) {
        knoten_.push_back(i);
    }
    for (int i = 0; i < groesse_; i++) {
        for (int j = i + 1; j < groesse_; j++) {
            kanten_.push_back({i, j});
        }
    }

}
