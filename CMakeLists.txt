cmake_minimum_required(VERSION 3.14)
project(adjazenz_inzidenz_kantentabelle)

set(CMAKE_CXX_STANDARD 14)

add_executable(adjazenz_inzidenz_kantentabelle main.cpp Adjazenzmatrix.cpp Adjazenzmatrix.h Inzidenzmatrix.cpp Inzidenzmatrix.h Kantentabelle.cpp Kantentabelle.h Graph.cpp Graph.h Converter.cpp Converter.h VollstaendigerGraph.cpp VollstaendigerGraph.h VerbundenerGraph.cpp VerbundenerGraph.h Komponentengraph.cpp Komponentengraph.h)