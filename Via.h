/*
  Archivo: Via.h
  Autor: Laura Moyano
  Email: laura.moyano@correounivalle.edu.co 
  Fecha creación: 2020-10-26
  Fecha última modificación: 2020-10-26
  Versión: 0.1
  Licencia: GPL
*/
/*
  Clase: Via
  Atributos:nombre, un vector de punteros a vagon
  Funcionalidades:
  - Introducir vagones a la via
  - Saca el último vagon
  - Consultar el estado actual de la via 
  - Retroceder vagones
  - Avanzar desde otra vía
  Relaciones: via conoce a vagon
*/

#include "Vagon.h"
#include <vector>
#include <iostream>
using namespace std;

#ifndef VIA_H
#define VIA_H

class Via 
{
  protected:
  string nombre;
  vector <Vagon *> vagones;

  public:
  //default constructor
  Via();
  
  //destructor
  ~Via();

  //agrega un vagon al vector de vagones 
  void introducirVagon(Vagon *vagon);


  //conoce el estado actual de la via
  string estadoActual();


  //elimina el ultimo vagon 
  void sacarUltimoVagon();

  //obtener el ultimo vagon
  Vagon *ultimoVagon();

  //retrocede y cede el vagon a la via receptora
  void retrocederPor(Via &viaReceptora);

  //avanza cede el vagon a la vía principal
  void avanzarDesde(Via &viaEmisora);
};

#else
class Via;
#endif