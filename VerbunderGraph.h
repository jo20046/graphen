//
// Created by Enthöfer Joshua on 2019-06-07.
//

#ifndef ADJAZENZ_INZIDENZ_KANTENTABELLE_VERBUNDERGRAPH_H
#define ADJAZENZ_INZIDENZ_KANTENTABELLE_VERBUNDERGRAPH_H


#include "Graph.h"

class VerbunderGraph : public Graph {

public:
    explicit VerbunderGraph(int laenge);

private:
    int laenge_;
};


#endif //ADJAZENZ_INZIDENZ_KANTENTABELLE_VERBUNDERGRAPH_H
