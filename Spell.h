#ifndef SPELL_H
#define SPELL_H
#include<iostream>
#include<vector>
#include<string>
#include "Node.h"

using namespace std;




class Spell
{
private:
    string nombre;
    string descripcion;
    string tipo;
    int efecto;
    int probabilidad;
public:

    Spell(/* args */);
    Spell(string _nombre, string _descripcion, string _tipo, int _efecto, int _probabilidad);
    string getNombre();
    void setNombre(string nombre);
    string getDescripcion();
    void setDescripcion(string descripcion);
    string getTipo();
    void setTipo(string tipo);
    int getEfecto();
    void setEfecto(int efecto);
    int getProbabilidad();
    void setProbabilidad(int probabilidad);
    friend std::ostream& operator<<(std::ostream& os, const Spell& s) {
        os << "{Name: " << s.nombre << ", description: " << s.descripcion << ", type: " << s.tipo
           << ", effect: " << s.efecto << ", probability of backfiring: " << s.probabilidad <<endl;
        return os;}
    int operator >(Spell s){
        return this->efecto>s.efecto;
    }
    int operator <(Spell s){
        return this->efecto==s.efecto;
    }
    bool operator ==(Spell s){
        return this->efecto==s.efecto;
    }
   
};
#endif

