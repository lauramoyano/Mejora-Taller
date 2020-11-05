/*
  Archivo: Via.cpp
  Autor: Laura Moyano
  Email: laura.moyano@correounivalle.edu.co
  Fecha creación: 2020-10-26
  Fecha última modificación: 2020-10-26
  Versión: 0.1
  Licencia: GPL
*/
#include "Via.h"

Via::Via()
{
}

Via::~Via()
{
  for(int i=0; i<vagones.size(); i++)
  { 
    delete vagones[i];
    vagones[i]=nullptr;
  }
}

void Via::introducirVagon(Vagon *vagon) 
{
   vagones.push_back(vagon);
}


void Via::sacarUltimoVagon()
{
  int ultimoVagon = vagones.size()-1;
  vagones[ultimoVagon] = nullptr;
  vagones.pop_back();
}

Vagon* Via::ultimoVagon()
{
  if(vagones.empty())
  {
    return nullptr;
  }

  Vagon *ultimo= vagones.back();
  return ultimo;

}

void Via::retrocederPor(Via &viaReceptora)
{
  if(vagones.empty() == false)
  {
    Vagon* vagonAMover = vagones.back();
    Via *viaDestino = &viaReceptora;
    viaDestino->introducirVagon(vagonAMover);
    sacarUltimoVagon();
  }
  
}

void Via::avanzarDesde(Via &viaEmisora)
{
   Via *viaActual = &viaEmisora;
   if(viaActual->vagones.empty()==false)
   {
     Vagon *vagonAMover= viaActual->vagones.back();

     vagones.push_back(vagonAMover);
     viaActual->sacarUltimoVagon();
   }
}
  


string Via::estadoActual()
{
  string numeroDeLosVagones;
   for(int cualVagon=0; cualVagon < vagones.size(); cualVagon++)
    if(vagones[cualVagon])

      numeroDeLosVagones += to_string(vagones[cualVagon]->obtenerNumeroVagon()) + ",";

  if(numeroDeLosVagones.size() >= 1)
    numeroDeLosVagones.resize(numeroDeLosVagones.size()-1); /* Usamos la función del ejemplo de un vector de punteros en biblioteca, teníamos otra pero nos arrojaba un error cuando el numero del vector era grande*/

    return numeroDeLosVagones;
}