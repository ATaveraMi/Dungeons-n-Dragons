#include "Jugador.h"
Jugador::Jugador(){
    raza = "";
    nombre = "";
    hp= 10;
    lp = 100;
}
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
int Jugador::get_hp() {
    return hp;
}

void Jugador::set_hp(int _hp) {
    hp = _hp;
}

// Getter and Setter for raza
string Jugador::get_raza() {
    return raza;
}

void Jugador::set_raza(string _raza) {
    raza = _raza;
}

// Getter and Setter for nombre
string Jugador::get_nombre() {
    return nombre;
}

void Jugador::set_nombre(string _nombre) {
    nombre = _nombre;
}

// Getter and Setter for lp
int Jugador::get_lp() {
    return lp;
}

void Jugador::set_lp(int _lp) {
    lp = _lp;
}

void Jugador::imprimirMensaje(bool vivo){
    if (!vivo){
        cout << "En estos momentos debes de preguntarte," <<nombre<< ", si fuiste un buen " <<raza<<endl;
        cout << "Mataste a .........."<<endl;
        if (mounstros_derrotados.getFirst() == nullptr){
        cout << "NADIE";
    } else{
        mounstros_derrotados.print();
    }
        

    } else{
    cout << nombre<< " eres un " << raza<<". Inclusive me atrevería a decir que tienes mucho potencial!" << endl;
    
    cout << "¡Eres un duro! Haces un máximo " << hp << " de daño"<<endl;
    cout << "Tienes " <<lp << " de vida, Recuerda que lo max es 999"<<endl;
    if (mounstros_derrotados.getFirst() == nullptr){
        cout << "Aún no matas ni a una mosca";
    } else{
        mounstros_derrotados.print();
    }


}}