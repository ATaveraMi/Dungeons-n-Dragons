#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include "Node.h"
#include "Monster.h"
#include "LinkedList.h"
#include "Logica.h"

using namespace std;

Logica::Logica() {
    fname = "monsters_patched.csv";
}

void Logica::readFile() {
    ifstream file(fname);

    string line, name, cr, type, size, align, ac, hp;

    getline(file, line);
    while (getline(file, line)) {
        
        stringstream ss(line);
        getline(ss, name, ',');
        getline(ss, cr, ',');
        getline(ss, type, ',');
        getline(ss, size, ',');
        
        getline(ss, ac, ',');
        getline(ss, hp, ',');
        getline(ss, align, ',');

        monsters.addNode(Monster(name, stof(cr), type, size, stoi(ac), stoi(hp), align));
    }

    monsters.print();
}

void Logica::readCalabozos() {
    ifstream file("calabozos.csv");

    string nombre, ubicacion, descripcion;

    getline(file, line);
    while (getline(file, line)) {
        
        stringstream ss(line);
        getline(ss, nombre, ',');
        getline(ss, ubicacion, ',');
        getline(ss, descripcion, ',');
        

        monsters.addNode(Monster(name, stof(cr), type, size, stoi(ac), stoi(hp), align));
    }

    monsters.print();
}