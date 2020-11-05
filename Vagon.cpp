/*
  Archivo: Vagon.cpp
  Autor: Laura Moyano
  Email: laura.moyano@correounivalle.edu.co
  Fecha creación: 2020-10-20
  Fecha última modificación: 2020-10-22
  Versión: 0.1
  Licencia: GPL
*/
#include "Vagon.h"

Vagon::Vagon(int numeroVagoncito, bool infectados):numeroVagon(numeroVagoncito), hayInfectados(infectados)
{
  
}

bool Vagon::estaInfectado()
{
   return this-> hayInfectados;
}

int Vagon::obtenerNumeroVagon()
{
   return this-> numeroVagon;
}