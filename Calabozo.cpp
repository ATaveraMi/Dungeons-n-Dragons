#include "Calabozo.h"

Calabozo::Calabozo()
{
    nombre = "";
    ubicacion = "";
    descripcion = "";
    mounstro = nullptr;
}
Calabozo::Calabozo(string _nombre, string _ubicacion, string _descripcion, Monster* _mounstro)
{
    nombre =_nombre;
    ubicacion = _ubicacion ;
    descripcion = _descripcion;
    mounstro = _mounstro;
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
    mounstro = _mounstro;
}
