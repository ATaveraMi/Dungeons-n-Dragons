#include "Jugador.h"
Jugador::Jugador(string _nombre, string _raza)
{
    raza = _raza;
    nombre = _nombre;
    hp= 10;
    lp = 100;
    
}

Jugador::~Jugador()
{
}