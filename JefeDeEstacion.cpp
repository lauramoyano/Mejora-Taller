/*
  Archivo: JefeDeEstacion.h
  Autor: Laura Moyano
  Email: laura.moyano@correounivalle.edu.co
  Fecha creación: 2020-10-26
  Fecha última modificación: 2020-10-26
  Versión: 0.1
  Licencia: GPL
*/
#include "JefeDeEstacion.h"

JefeDeEstacion:: JefeDeEstacion(Via &refViaPrincipal, Via &refRamalIzquierdo, Via &refRamalDerecho ):viaPrincipal(refViaPrincipal), ramalIzquierdo(refRamalIzquierdo),ramalDerecho(refRamalDerecho)
{

}

void  JefeDeEstacion::organizarTren()
{  
  Vagon *vagonActual = viaPrincipal.ultimoVagon();

  while(vagonActual != nullptr)
  {
    if(vagonActual->estaInfectado())
    {
      viaPrincipal.retrocederPor(ramalIzquierdo);
    }
    else 
    {
      viaPrincipal.retrocederPor(ramalDerecho);
    }

    vagonActual = viaPrincipal.ultimoVagon();
  }

  vagonActual = ramalDerecho.ultimoVagon();

  while(vagonActual != nullptr)
  {
    viaPrincipal.avanzarDesde(ramalDerecho);

    vagonActual = ramalDerecho.ultimoVagon();
  }

  vagonActual = ramalIzquierdo.ultimoVagon();

  while(vagonActual != nullptr)
  {
    viaPrincipal.avanzarDesde(ramalIzquierdo);

    vagonActual = ramalIzquierdo.ultimoVagon();
  }

}