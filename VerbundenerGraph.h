//
// Created by Enthöfer Joshua on 2019-06-07.
//

#ifndef ADJAZENZ_INZIDENZ_KANTENTABELLE_VERBUNDENERGRAPH_H
#define ADJAZENZ_INZIDENZ_KANTENTABELLE_VERBUNDENERGRAPH_H


#include "Graph.h"

class VerbundenerGraph : public Graph {

public:
    explicit VerbundenerGraph(int laenge);

private:
    int laenge_;
};


#endif //ADJAZENZ_INZIDENZ_KANTENTABELLE_VERBUNDENERGRAPH_H
