//
// Created by Enthöfer Joshua on 2019-06-07.
//

#include "VerbunderGraph.h"

VerbunderGraph::VerbunderGraph(int laenge) {

    this->laenge_ = laenge;

    for (int i = 0; i < laenge; i++) {
        knoten_.push_back(i);
        if (i >= 1) {
            kanten_.push_back({knoten_.at(i - 1), knoten_.at(i)});
        }
    }

}
