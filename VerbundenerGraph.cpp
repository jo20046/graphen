//
// Created by Enthöfer Joshua on 2019-06-07.
//

#include "VerbundenerGraph.h"

VerbundenerGraph::VerbundenerGraph(int laenge) {

    this->laenge_ = laenge;

    for (int i = 0; i < laenge_; i++) {
        knoten_.push_back(i);
        if (i >= 1) {
            kanten_.push_back({knoten_.at(i - 1), knoten_.at(i)});
        }
    }


}
