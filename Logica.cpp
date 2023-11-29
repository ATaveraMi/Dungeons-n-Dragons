

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

Monster* Logic::escogerMounstro(){
    srand(time(nullptr));

        // Genera un índice aleatorio entre 0 y el tamaño de la lista - 1
        int randomIndex = rand() % 762;

        // Recorre la lista hasta el índice aleatorio
        Node* current = head;
        for (int i = 0; i < randomIndex; ++i) {
            current = current->next;
        }
        return current
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
        

        escenarios.addNode(Calabozo(nombre, ubicacion, descripcion, escogerMounstro() ));
    }

    monsters.print();
}

void Logica::readSpell(){
    ifstream file("spells.csv");
    string nom, tip, descr;
    string ef, prob;
    getline(file, line);
    while (getline(file, line)) {
        
        stringstream ss(line);
        getline(ss, nom, ',');
        getline(ss, descr, ',');
        getline(ss, tip, ',');
        
        getline(ss, ef, ',');
        getline(ss, prob, ',');
        

        Spell sp(nom, descr ,tip, stoi(ef), stoi(prob) );
        spells.insert(sp);
    }

}