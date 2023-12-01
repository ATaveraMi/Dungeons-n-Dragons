

#include "Logica.h"

using namespace std;

Logica::Logica() {
    fname = "monsters_patched.csv";
    srand(time(nullptr));
    // Dado* dadoAtaqueMounstro = new Dado(10);
    // Dado* dadoRecuperar = new Dado(8);
    // Dado* ElegirMounstro = new Dado(730);
    // Dado* dadoPersonaje = new Dado(10);
    // Dado* dadoCalabozo = new Dado(19);
    dadoAtaqueMounstro = new Dado(10);
    dadoRecuperar = new Dado(8);
    ElegirMounstro = new Dado(730);
    dadoPersonaje = new Dado(10);
    dadoCalabozo = new Dado(19);
    


    
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
//     Node<Monster>* randomMonst = monsters.findAtPos(ElegirMounstro->lanzar());
//     return randomMonst->getData(); // Esto ya devuelve un Monster*
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
void Logica::entrarCalabozo(Jugador* jug){

    Node<Calabozo>* cuarto = escenarios.findAtPos(dadoCalabozo->lanzar());
    Calabozo cal = cuarto->getData();
    Monster* mon = cal.getMounstro();
    
    while (mon->getHp() >=0 ){
        cout << cuarto->getData() << endl;
        cuarto = escenarios.findAtPos(dadoCalabozo->lanzar());

    } 
    cout << cuarto->getData() << endl;

    menuBatalla(jug, mon);




   


    
}

void Logica::triunfo(Jugador* j ){
    cout <<"Felicidades! MATASTE a uno de los malos"<<endl;
    j->imprimirMensaje(true);
    cout << "Presione ENTER...";
        cin.ignore();
        cin.get(); 
    menuD();

}

void Logica::derrota(Jugador* j){
    cout<<"Terrible!"<<endl;
    j->imprimirMensaje(false);
    cout << "Presione ENTER...";
        cin.ignore();
        cin.get(); 
    exit(0);
}

void Logica::atacar(Jugador* j, Monster* mon, string quien){
    if (quien == "atacante"){
        cout<< j->get_nombre() << " Es te es tu lp "<<j->get_lp()<<endl;
        cout << mon->getName() << " Tiene un hp de "<< mon->getHp()<<endl;
        mon->setHp(mon->getHp()-(dadoPersonaje->lanzar(j->get_hp())));
        cout << "Las cosas han cambiado";
        cout << mon->getName() << " Tiene un hp de "<< mon->getHp()<<endl;
        if(mon->getHp()<0){
            //j->mounstros_derrotados.addNode(mon)
            j->mounstros_derrotados.addNode(*new Monster(*mon));
            triunfo(j);



        }
        cout << "Presione ENTER...";
        cin.ignore();
        cin.get(); 

    } else{
        cout<<"Turno del mounstro"<<endl;
        cout<< j->get_nombre() << " Este es tu lp "<<j->get_lp()<<endl;
        cout << mon->getName() << " Tiene un hp de "<< mon->getHp()<<endl;
        j->set_lp(j->get_lp()-(dadoAtaqueMounstro->lanzar()));
        cout << "Las cosas han cambiado";
        cout<< j->get_nombre() << " Este es tu lp "<<j->get_lp()<<endl;
        if(j->get_lp()<0){
            //j->mounstros_derrotados.addNode(mon)
            
            derrota(j);

    }
    }
}

// void Logica::menuBatalla(Jugador* j, Monster* monster ){
//     string respuestas;
//     cout << "Presione ENTER...";
//         cin.ignore();
//         cin.get(); 
//     cout<<endl<<"****************"<<endl;
//     cout<<"Una batalla contra "<<monster->getName()<<" ha empezado"<<endl;


//     while(j->get_lp() >0 || monster->getHp() > 0){
//     cout<<"1. atacar (tirar dado)"<<endl;
//     cout<<"2. Mostrar hechizos"<<endl;
    

//     cin >> respuestas;
//     if (respuestas == "1") {
//         atacar(j,monster,"atacante");
//         atacar(j,monster,"natacante");


//     } else if (respuestas == "2"){
//         spells.print();

//     } 
        
        
//     }}

void Logica::menuBatalla(Jugador* j, Monster* monster) {
    string respuestas;
    cout << "Presione ENTER...";
    cin.ignore();
    cin.get(); 
    cout << endl << "****************" << endl;
    cout << "Una batalla contra " << monster->getName() << " ha empezado" << endl;

    while (j->get_lp() > 0 && monster->getHp() > 0) {
        cout << "1. atacar (tirar dado)" << endl;
        cout << "2. Mostrar hechizos" << endl;

        cin >> respuestas;
        if (respuestas == "1") {
            atacar(j, monster, "atacante");
            atacar(j, monster, "natacante");
        } else if (respuestas == "2") {
            spells.print();
        } 
    }
}




void Logica::menuD(){
    string choice;
    bool keepPlaying = true;
    cargarArchivos();
    Jugador* jugador1 = crearPersonaje();
    cout << "\nAhora sí, ¡A JUGAR!"<<endl;
    cout << "Para entrar a cada calabozo se lanzará un dado de 20 caras para ver a cuál se entra";

    
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
            entrarCalabozo(jugador1);
            
            keepPlaying = false;

            
        }
        else if (choice == "2") {
            spells.print();
            keepPlaying = false;
        }
        else if (choice == "3") {
            stats(jugador1);
            keepPlaying = false;

        }


        

        

    } while (keepPlaying);

}