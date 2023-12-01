
#ifndef PROYECTODD_LOGICA_H
#define PROYECTODD_LOGICA_H

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include "LinkedList.h" 
#include "Calabozo.h"
#include "Node.h"
#include "Spell.h"
#include "Monster.h"
#include "Jugador.h"
#include "Dado.h"
#include <cstdlib> 
#include <ctime>    // Para usar time()
#include <cstdlib>  // Para usar rand()

using namespace std;

class Logica {
private:
    string fname;
    string line, name, cr, type, size, align, ac, hp;
    string nombre, ubicacion, descripcion;
    LinkedList<Monster> monsters;
    LinkedList<Calabozo> escenarios; 
    LinkedList<Spell> spells; 
    Dado* dadoAtaqueMounstro;
    Dado* dadoRecuperar;
    Dado* ElegirMounstro;
    Dado* dadoPersonaje;
    Dado* dadoCalabozo;

public:
    
    void readFile();
    Monster* escogerMounstro();
    void readCalabozos();
    void readSpell();
    Logica();
    void menuD(bool nuevo);
    void cargarArchivos();
    Jugador* crearPersonaje();
    void entrarCalabozo(Jugador* jugador);
    void stats(Jugador* jugador);
    void menuBatalla(Jugador* j, Monster* m);
    void atacar(Jugador* j, Monster* m, string agresor);
    void triunfo(Jugador* j);
    void derrota(Jugador* derrota);
    void menuSpell(Jugador* j, Monster* mon);
    };

#endif // PROYECTODD_LOGICA_H