#include "Calabozo.h"
Calabozo::Calabozo(string _nombre, string _ubicacion, string _descripcion, Monster* _mounstro)
{
    _nombre = nombre;
    _ubicacion = ubicacion;
    _descripcion = descripcion;
    mounstro = _mounstro;
}
Calabozo::~Calabozo()
{

}

string Calabozo::getNombre(){
    return nombre;
}

void Calabozo::setNombre(string _nombre){
    nombre = _nombre;
}

string Calabozo::getUbicacion(){
    return ubicacion;
}

void Calabozo::setUbicacion(string _ubicacion){
    ubicacion = _ubicacion;
}

string Calabozo::getDescripcion(){
    return descripcion;
}

Monster* Calabozo::getMounstro(){
    return mounstro;
}

void Calabozo::setMounstro(Monster* _mounstro){
    mounstro = _mounstro
}
