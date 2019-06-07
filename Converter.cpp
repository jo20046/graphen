//
// Created by Enthöfer Joshua on 2019-06-07.
//

#include "Converter.h"

Inzidenzmatrix Converter::adjazenzmatrix_to_inzidenzmatrix(Adjazenzmatrix am) {
    return Inzidenzmatrix(am.get_graph());
}

Kantentabelle Converter::adjazenzmatrix_to_kantentabelle(Adjazenzmatrix am) {
    return Kantentabelle(am.get_graph());
}

Adjazenzmatrix Converter::inzidenzmatrix_to_adjazenzmatrix(Inzidenzmatrix im) {
    return Adjazenzmatrix(im.get_graph());
}

Kantentabelle Converter::inzidenzmatrix_to_kantentabelle(Inzidenzmatrix im) {
    return Kantentabelle(im.get_graph());
}

Adjazenzmatrix Converter::kantentabelle_to_adjazenzmatrix(Kantentabelle kt) {
    return Adjazenzmatrix(kt.get_graph());
}

Inzidenzmatrix Converter::kantentabelle_to_inzidenzmatrix(Kantentabelle kt) {
    return Inzidenzmatrix(kt.get_graph());
}
