#ifndef _POLIGONO
#define _POLIGONO

#include "Punto.h"
#include <ostream>
#include <vector>

class Poligono{
public:
  Poligono(const std::vector<Punto>& punti):m_punti(punti){};
  Poligono():Poligono(std::vector<Punto>(0)){}
  friend std::ostream& operator<<(std::ostream& os, const Poligono& b);
  double Perimetro() const;
protected:
  std::vector <Punto> m_punti;
};

std::ostream& operator<<(std::ostream& os, const Poligono& b);
  
#endif
