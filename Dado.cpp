#include "Dado.h"


Dado::Dado(int numCaras) : caras(numCaras) {
    srand(static_cast<unsigned int>(time(nullptr)));
}


int Dado::lanzar() {
   int rolled =  rand() % caras + 1;
   cout <<"\nSacaste un "<<rolled <<".";
   return rolled;
}
int Dado::lanzar(int n_caras) {
   int rolled =  rand() % n_caras + 1;
   cout <<"\nSacaste un "<<rolled;
   return rolled;
}