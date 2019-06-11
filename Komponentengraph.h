//
// Created by Enthöfer Joshua on 2019-06-07.
//

#ifndef ADJAZENZ_INZIDENZ_KANTENTABELLE_KOMPONENTENGRAPH_H
#define ADJAZENZ_INZIDENZ_KANTENTABELLE_KOMPONENTENGRAPH_H


#include "Graph.h"

class Komponentengraph : public Graph {

public:
    explicit Komponentengraph(int anzahl_komponenten, int knoten_pro_komponente);

private:
    int anzahl_komponenten_;
    int knoten_pro_komponente_;
};


#endif //ADJAZENZ_INZIDENZ_KANTENTABELLE_KOMPONENTENGRAPH_H
