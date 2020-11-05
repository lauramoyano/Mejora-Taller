/*
  Archivo: Vagon.h
  Autor: Laura Moyano
  Email: laura.moyano@correounivalle.edu.co 
  Fecha creación: 2020-10-20
  Fecha última modificación: 2020-10-22
  Versión: 0.1
  Licencia: GPL
*/
/*
  Clase: Vagon
  Atributos: numero de vagon, infectado.
  Funcionalidades:
  - Sabe si hay infectados 
  - obtiene el número de vagon
  Relaciones: No hay
*/

#include <vector>
#include <iostream>
using namespace std;

#ifndef VAGON_H
#define VAGON_H

class Vagon 
{
  protected:
  int numeroVagon;
  bool hayInfectados;

  public:
  //constructor
  Vagon (int numeroVagoncito, bool infectados);

  //sabe si está infectado
  bool estaInfectado();

  //obtiene el numero de vagon
  int obtenerNumeroVagon();

};

#else
class Vagon;
#endif