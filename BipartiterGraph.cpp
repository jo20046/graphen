//
// Created by Enthöfer Joshua on 2019-06-11.
//

#include "BipartiterGraph.h"

BipartiterGraph::BipartiterGraph(int groesse_partition_1, int groesse_partition_2) {
    this->groesse_partition_1_ = groesse_partition_1;
    this->groesse_partition_2_ = groesse_partition_2;
    for (int i = 0; i < groesse_partition_1_ + groesse_partition_2_; i++) {
        knoten_.push_back(i);
    }
    for (int i = 0; i < groesse_partition_1_; i++) {
        for (int j = groesse_partition_1_; j < groesse_partition_1_ + groesse_partition_2_; j++) {
            kanten_.push_back({i, j});
        }
    }

}
