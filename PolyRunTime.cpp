#include <iostream>
#include <string>

using namespace std;

class Animale{
  public:
    Animale(){}
    virtual void parla(){
      std::cout << " ???" << std::endl;
    }
};

class Cane: public Animale{
  public:
    using Animale::Animale;
    void parla(){
      std::cout << " Bau" << std::endl;
    }
};

class Gatto : public Animale{
  public :
    using Animale::Animale;
    void parla(){
      std::cout << " Miao" << std::endl;
    }
};

class Uomo: public Animale{
  public:
    using Animale::Animale;
    void parla(){
      std::cout << " Burp" << std::endl;
    }
};

int main(){
  
  cout << "Inserisci il nome dell’animale (q per uscire)" << endl;

  Animale *p=NULL;
  string opt="";
  
  while (opt!="q"){
    cin >> opt ;
    if (opt=="Cane")
      p = new Cane;
    else if (opt=="Gatto")
      p = new Gatto;
    else if (opt=="Uomo")
      p = new Uomo;
    else
      if (opt!="q")
	cout << "Animale non esistente" << endl;
    if (opt!="q")
      p->parla();
  }

  return 0;
}
  
