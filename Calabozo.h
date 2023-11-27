#ifndef CALABOZO_H
#define CALABOZO_H
#include <random>
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
    Calabozo();
    Calabozo(string nombre, string ubicacion, string descripcion, Monster* mounstro);
    
    string getNombre();
    void setNombre(string nombre);
    string getUbicacion();
    void setUbicacion(string ubicacion);
    string getDescripcion();
    void setDescripcion(string descripcion); 
    Monster* getMounstro();
    void setMounstro(Monster* mounstro);
    friend std::ostream& operator<<(std::ostream& os, const Calabozo& calabozo) {
        os << "Bienvenido al planeta "<< calabozo.ubicacion << calabozo.nombre << ". "<< calabozo.descripcion << ". Te enfrentaras con : " << calabozo.mounstro->getName()
           ;
        return os;}
    bool operator ==(Calabozo& c){
        return this->nombre == c.nombre;
    }

    int operator >(Calabozo c){
        return this->nombre > c.nombre;
    }
    int operator <(Calabozo c){
        return this->nombre == c.nombre;
    }

};



#endif