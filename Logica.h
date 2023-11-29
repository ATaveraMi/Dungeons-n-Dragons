
#ifndef PROYECTODD_LOGICA_H
#define PROYECTODD_LOGICA_H

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include "LinkedList.h" 
#include "Calabozo.h"
#include "Node.h"
#include "Monster.h"
#include "Hashtable.h"
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

public:
    Hashtable spells;
    void readFile();
    Monster* escogerMounstro();
    void readCalabozos();
    void readSpell();
    Logica();
    

};

#endif // PROYECTODD_LOGICA_H