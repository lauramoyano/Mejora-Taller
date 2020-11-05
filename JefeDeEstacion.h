/*
  Archivo: JefeDeEstacion.h
  Autor: Laura Moyano
  Email: laura.moyano@correounivalle.edu.co 
  Fecha creación: 2020-10-20
  Fecha última modificación: 2020-10-22
  Versión: 0.1
  Licencia: GPL
*/
/*
  Clase: JefeDeEstacion
  Atributos: referencias de las tres vias
  Funcionalidades:
  - Origaniza los vagones 
  Relaciones: conoce a Via por medio de referencias 
*/
#ifndef JEFEDEESTACION_H
#define JEFEDEESTACION_H

#include "Via.h"
#include "vector"
#include<string>
using namespace std;


class JefeDeEstacion
{

  protected:
  Via &viaPrincipal;
  Via &ramalIzquierdo;
  Via &ramalDerecho;
  
 
  public:
  //constructor
  JefeDeEstacion(Via &viaPrincipal, Via &ramalIzquierdo, Via &ramalDerecho);

  //organiza los vagones que están infectados de último dandole ordenes a Via
  void organizarTren();

};

#else
class JefeDeEstacion;
#endif