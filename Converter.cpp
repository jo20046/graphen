//
// Created by Enthöfer Joshua on 2019-06-07.
//

#include "Converter.h"

Inzidenzmatrix Converter::adjazenzmatrix_to_inzidenzmatrix(Adjazenzmatrix am) {
    Graph g = am.get_graph();
    return Inzidenzmatrix(&g);
}

Kantentabelle Converter::adjazenzmatrix_to_kantentabelle(Adjazenzmatrix am) {
    Graph g = am.get_graph();
    return Kantentabelle(&g);
}

Adjazenzmatrix Converter::inzidenzmatrix_to_adjazenzmatrix(Inzidenzmatrix im) {
    Graph g = im.get_graph();
    return Adjazenzmatrix(&g);
}

Kantentabelle Converter::inzidenzmatrix_to_kantentabelle(Inzidenzmatrix im) {
    Graph g = im.get_graph();
    return Kantentabelle(&g);
}

Adjazenzmatrix Converter::kantentabelle_to_adjazenzmatrix(Kantentabelle kt) {
    Graph g = kt.get_graph();
    return Adjazenzmatrix(&g);
}

Inzidenzmatrix Converter::kantentabelle_to_inzidenzmatrix(Kantentabelle kt) {
    Graph g = kt.get_graph();
    return Inzidenzmatrix(&g);
}
