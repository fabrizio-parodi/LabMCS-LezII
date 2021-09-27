#ifndef _PUNTO
#define _PUNTO

#include <ostream>

class Punto{
public:
  Punto(double x=0, double y=0):m_x(x),m_y(y){}
  double Dist(const Punto& b) const;
  double X() const;
  double Y() const;
private:
  double m_x,m_y;
};

std::ostream& operator<<(std::ostream& os, const Punto& p);

#endif
