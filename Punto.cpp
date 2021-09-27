#include "Punto.h"
#include <cmath>

double Punto::X() const{
  return m_x;
}

double Punto::Y() const{
  return m_y;
}

double Punto::Dist(const Punto& b) const{
  return sqrt(pow(m_x-b.m_x,2)+pow(m_y-b.m_y,2));
}

std::ostream& operator<<(std::ostream& os, const Punto& p){
  os << "(" << p.X() << "," << p.Y() << ")";
  return os;
}

