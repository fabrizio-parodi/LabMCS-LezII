#ifndef _VECTORN
#define _VECTORN

#include <vector>
using namespace std;

template <class T>
class vectorn: public vector<T>{
 public:
  using vector<T>::vector;
  vectorn<T> operator+(const vectorn&)const;  
  vectorn<T> operator*(double)        const;  
};

template <class T>
vectorn<T> vectorn<T>::operator+(const vectorn<T>& b) const{
  vectorn res(this->size());
  for (int i=0;i<this->size();i++)
    res.at(i) = this->at(i) + b.at(i);
  return res;
}

template <class T>
vectorn<T> vectorn<T>::operator*(double f) const{
  vectorn res(this->size());
  for (int i=0;i<this->size();i++)
    res.at(i) = this->at(i)*f;
  return res;
}

#endif
