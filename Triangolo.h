#ifndef _TRIANGOLO
#define _TRIANGOLO

#include "Poligono.h"
#include <cmath>

class Triangolo: public Poligono{
public:
  using Poligono::Poligono;
  Triangolo(double a, double b, double theta):Poligono(){
    m_punti.push_back(Punto(0,0));
    m_punti.push_back(Punto(a,0));
    m_punti.push_back(Punto(b*cos(theta),b*sin(theta)));
  }
};

#endif
