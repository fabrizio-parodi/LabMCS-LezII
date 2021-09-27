#include "Poligono.h"
std::ostream& operator<<(std::ostream& os, const Poligono& b){
  os << "Poligono formato dai punti" << std::endl;
  for (auto pt: b.m_punti) 
    os << "  " << pt << std::endl;
  return os;
}
