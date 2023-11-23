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
    Calabozo(string nombre, string ubicacion, string descripcion, Monster* mounstro);
    ~Calabozo();
    string getNombre();
    void setNombre(string nombre);
    string getUbicacion();
    void setUbicacion(string ubicacion);
    string getDescripcion();
    void setDescripcion(string descripcion); 
    Monster* getMounstro();
    void setMounstro(Monster* mounstro);
};



#endif