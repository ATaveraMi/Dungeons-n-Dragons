

#include "Logica.h"

using namespace std;

Logica::Logica() {
    fname = "monsters_patched.csv";
    srand(time(nullptr));
    Dado* dadoAtaque = new Dado(10);
    Dado* dadoRecuperar = new Dado(8);
    Dado* ElegirMounstro = new Dado(730);

    
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

    
}

// Monster* Logica::escogerMounstro(){
    

//         // Genera un índice aleatorio entre 0 y el tamaño de la lista - 1
//         int randomIndex = rand() % 762;

//         // Recorre la lista hasta el índice aleatorio
//         Node<Monster> *current = monsters.getFirst();
//         for (int i = 0; i < randomIndex; ++i) {
//             current = current->getNext();
//         }
//         return current->getData();
// }



void Logica::readCalabozos() {
    ifstream file("calabozos.csv");

    string nombre, ubicacion, descripcion;

    getline(file, line);
    while (getline(file, line)) {
        
        stringstream ss(line);
        getline(ss, nombre, ',');
        getline(ss, ubicacion, ',');
        getline(ss, descripcion, ',');
        

        escenarios.addNode(Calabozo(nombre, ubicacion, descripcion, new Monster("aarakocra",0.25,"humanoid (aarakocra)","Medium",12,13,"neutral good") ));
        //Falta hacer que el mounstro que se crea sea random
    }
    

  
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
        

        
        spells.addNode(Spell(nom, descr ,tip, stoi(ef), stoi(prob) ));
    }

    
    

}

void Logica::cargarArchivos(){
    readFile();
    readCalabozos();
    readSpell();
    cout <<"Bienvenido a Dungeons and Dragons!" << endl <<"¡Es hora de empezar a personalizar tu personaje!";

}

Jugador* Logica::crearPersonaje(){
    string  nombre, tipo;
    cout << "\n¿Cómo te llamas? ";
    cin >> nombre;
    cout <<"Perfecto "<<nombre <<"! En este maravillos munco tenemos 4 tipos de criaturas.\nPresiona 1 si deseas ser humano,\n2 si quieres ser un enano o\n3 si deseas ser un elfo. Tranquil@ esto no afectara en nada tu modalidad de juego"<< endl;
    cin>>tipo;
    while (tipo != "1" && tipo != "2" && tipo != "3") {
        cout << "Tipo invalido, por favor ingresar de nuevo: ";
        cin>> tipo;
    }
    if (tipo == "1"){
        return new Jugador(nombre, "humano");
    } else if (tipo == "2"){
    
        return new Jugador(nombre, "enano");
    } else if (tipo == "3"){
        return new Jugador(nombre, "elfo");
    } else { 
        return new Jugador();
    }
}

void Logica::stats(Jugador* jugador){
    if (jugador->get_hp() <=0){
        jugador->imprimirMensaje(false);
     } else{
        jugador->imprimirMensaje(true);
     }
}

void Logica::menu(){
    string choice;
    bool keepPlaying = true;
    cargarArchivos();
    Jugador* jugador1 = crearPersonaje();
    cout << "\nAhora sí, ¡A JUGAR!";

    
    do {
        system("clear");
        cout <<"MENU D&D:\n"<<endl;
        cout <<"1. Ir a un calabozo"<<endl;
        cout <<"2. Mostrar hechizos"<<endl;
        cout <<"3. Mostrar stats"<<endl;
        cout <<"4. Ruleta Rusa (gana 15hp / pierde 15 hp)"<<endl;
        cout <<"5. Acabar Juego"<<endl;
        cin >> choice;
        if (choice == "1") {
            //entrarCalabozo();
            
        }
        if (choice == "2") {
            spells.print();
            keepPlaying = false;
        }
        if (choice == "3") {
            stats(jugador1);
            keepPlaying = false;

        }


        

        

    } while (keepPlaying);

}