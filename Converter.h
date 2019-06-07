//
// Created by Enthöfer Joshua on 2019-06-07.
//

#ifndef ADJAZENZ_INZIDENZ_KANTENTABELLE_CONVERTER_H
#define ADJAZENZ_INZIDENZ_KANTENTABELLE_CONVERTER_H


#include "Inzidenzmatrix.h"
#include "Adjazenzmatrix.h"
#include "Kantentabelle.h"

class Converter {
public:
    static Inzidenzmatrix adjazenzmatrix_to_inzidenzmatrix(Adjazenzmatrix am);

    static Kantentabelle adjazenzmatrix_to_kantentabelle(Adjazenzmatrix am);

    static Adjazenzmatrix inzidenzmatrix_to_adjazenzmatrix(Inzidenzmatrix im);

    static Kantentabelle inzidenzmatrix_to_kantentabelle(Inzidenzmatrix im);

    static Adjazenzmatrix kantentabelle_to_adjazenzmatrix(Kantentabelle kt);

    static Inzidenzmatrix kantentabelle_to_inzidenzmatrix(Kantentabelle kt);
};


#endif //ADJAZENZ_INZIDENZ_KANTENTABELLE_CONVERTER_H
