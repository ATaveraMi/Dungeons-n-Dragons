#ifndef DADO_H
#define DADO_H

#include <cstdlib> 
#include <iostream>
#include <ctime> 

using namespace std;

class Dado {
private:
    int caras;

public:
    Dado(int numCaras);  
    
    int lanzar();      
    int lanzar(int caras);  
};

#endif // DADO_H