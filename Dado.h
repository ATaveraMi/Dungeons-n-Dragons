

#ifndef DADO_H
#define DADO_H

#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>

class Dado {
public:
    Dado(int numCaras);
    int lanzar();
    int lanzar(int caras); 
    int lanzar(int caras, bool silencioso);
    
private:
    int caras;
};
#endif




