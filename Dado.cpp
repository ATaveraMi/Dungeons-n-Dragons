#include "Dado.h"



Dado::Dado(int numCaras) : caras(numCaras) {
    srand(static_cast<unsigned>(time(0)));
}

int Dado::lanzar() {
    int rolled = rand() % caras + 1;
    cout << "\nEl dado muestra un " << rolled << "."<<endl;
    return rolled;
}


int Dado::lanzar(int ncaras ) {
    int rolled = rand() % ncaras + 1;
    cout << "\nSacaste un " << rolled << "."<<endl;
    return rolled;
}


