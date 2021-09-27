CC         = g++ 
CFLAGS     = --std=c++11 -g -Wall `root-config --cflags`
CLIBS      = `root-config --glibs`

all: MainPol

Punto.o: Punto.cpp
	$(CC) $(CFLAGS) -c Punto.cpp           
Poligono.o: Poligono.cpp
	$(CC) $(CFLAGS) -c Poligono.cpp          
MainPol: MainPol.cpp Punto.o Poligono.o
	$(CC) -o MainPol MainPol.cpp Punto.o Poligono.o $(CFLAGS) $(CLIBS)

MainVectorn: MainVectorn.cpp 
	$(CC) -o MainVectorn MainVectorn.cpp $(CFLAGS) $(CLIBS)

PolyRunTime: PolyRunTime.cpp
	$(CC) -o PolyRunTime PolyRunTime.cpp $(CFLAGS) $(CLIBS)

clean:
	rm *.o
