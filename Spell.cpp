#include "Spell.h"

Spell::Spell(/* args */)
{
    nombre ="";
    descripcion ="";
    tipo ="";
    efecto=0;
    probabilidad = 0;


}

Spell::~Spell()
{
}

Spell::Spell(string _nombre, string _descripcion, string _tipo, int _efecto, int _probabilidad){
    nombre =_nombre;
    descripcion =_descripcion;
    tipo =_tipo;
    efecto =_efecto;
    probabilidad =_probabilidad;
}

string Spell::getNombre(){
    return nombre;
}
void Spell::setNombre(string _nombre){
    nombre =_nombre;
}
string Spell::getDescripcion(){
    return descripcion;
}
void Spell::setDescripcion(string _d){
    descripcion=_d;
}
string Spell::getTipo(){
    return tipo;
}
void Spell::setTipo(string _tipo){
    tipo = _tipo;

}

int Spell::getProbabilidad(){
    return probabilidad;
}
void Spell::setProbabilidad(int _p){
    probabilidad = _p;
 
}

int Spell::getEfecto(){
    return efecto;
}
void Spell::setEfecto(int _e){
    efecto = _e;

}
string Spell::toString(){
    return "Nombre: "+ this->nombre+" Descripcion: "+this->descripcion+" efecto: "+to_string(this->efecto)+ " Tipo: "+this->tipo+" probablidad de ser mailigno: "+ to_string(this->probabilidad);
}
