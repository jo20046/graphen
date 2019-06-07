//
// Created by Enthöfer Joshua on 2019-06-07.
//

#ifndef ADJAZENZ_INZIDENZ_KANTENTABELLE_VOLLSTAENDIGERGRAPH_H
#define ADJAZENZ_INZIDENZ_KANTENTABELLE_VOLLSTAENDIGERGRAPH_H


#include "Graph.h"

class VollstaendigerGraph : public Graph {

public:
    explicit VollstaendigerGraph(int groesse);

private:
    int groesse_;
};


#endif //ADJAZENZ_INZIDENZ_KANTENTABELLE_VOLLSTAENDIGERGRAPH_H
