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
        os << "Bienvenido a "<< calabozo.ubicacion <<". Te encuentras en " << calabozo.nombre << ". "<< calabozo.descripcion << ". De pronto aparece un "<<calabozo.mounstro->getType()<< " atentando contra tu vida." 
        << " Se llama "<<calabozo.mounstro->getName() << " y no se ve muy amigable";
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