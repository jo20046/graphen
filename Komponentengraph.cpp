//
// Created by Enthöfer Joshua on 2019-06-07.
//

#include "Komponentengraph.h"

Komponentengraph::Komponentengraph(int anzahl_komponenten, int knoten_pro_komponente) {

    this->anzahl_komponenten_ = anzahl_komponenten;
    this->knoten_pro_komponente_ = knoten_pro_komponente;

    for (int i = 0, k = 0; i < anzahl_komponenten_; i++) {
        for (int j = 0; j < knoten_pro_komponente_; j++, k++) {
            knoten_.push_back(k);
            if (j > 0) {
                kanten_.push_back({k - 1, k});
            }
        }
    }

}
