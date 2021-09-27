#include "vectorn.h"
#include <iostream>

using namespace std;

int main(){
  vectorn<double> v1(4,1);
  vectorn<double> v2(4,3);
  vectorn<double> v3(4),v4(4);
  v3 = v1+v2;
  for (auto a:v3)
    cout << a <<  " ";
  cout << endl;
  return 0;
}
