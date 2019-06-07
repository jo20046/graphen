//
// Created by Enthöfer Joshua on 2019-06-07.
//

#ifndef ADJAZENZ_INZIDENZ_KANTENTABELLE_CONVERTER_H
#define ADJAZENZ_INZIDENZ_KANTENTABELLE_CONVERTER_H


#include "Adjazenzmatrix.h"
#include "Inzidenzmatrix.h"

class Converter {

public:
    static Adjazenzmatrix inzidenz_zu_adjazenz(Adjazenzmatrix am, Inzidenzmatrix im);

};


#endif //ADJAZENZ_INZIDENZ_KANTENTABELLE_CONVERTER_H
