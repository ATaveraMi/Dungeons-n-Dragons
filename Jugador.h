#ifndef JUGADOR_H
#define JUGADOR_H
#include<string>
#include "Monster.h"
#include "LinkedList.h"
using namespace std;
class Jugador
{
private:
    int hp;
    string raza;
    string nombre;
    int lp;
    LinkedList<Monster> mounstros_derrotados; 


public:
    Jugador(string nombre, string raza);
    ~Jugador();
};




#endif // JUGADOR_H