#ifndef CALABOZO_H
#define CALABOZO_H
#include<string>
#include "Monster.h"
#include "LinkedList.h"
class Calabozo
{
private:
    string nombre;
    string ubicacion;
    string descripcion;
    Monster* mounstro;

public:
    Calabozo(string nombre, string ubicacion, string descripcion, Monster mounstro);
    ~Calabozo();
};



#endif