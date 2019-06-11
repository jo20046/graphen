//
// Created by Enthöfer Joshua on 2019-06-11.
//

#ifndef ADJAZENZ_INZIDENZ_KANTENTABELLE_BIPARTITERGRAPH_H
#define ADJAZENZ_INZIDENZ_KANTENTABELLE_BIPARTITERGRAPH_H


#include "Graph.h"

class BipartiterGraph : public Graph {

public:
    BipartiterGraph(int groesse_partition_1, int groesse_partition_2);

private:
    int groesse_partition_1_;
    int groesse_partition_2_;

};


#endif //ADJAZENZ_INZIDENZ_KANTENTABELLE_BIPARTITERGRAPH_H
