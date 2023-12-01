#ifndef JUGADOR_H
#define JUGADOR_H
#include<string>
#include "Monster.h"
#include "LinkedList.h"
using namespace std;
class Jugador
{
private:
    int hp;
    string raza;
    string nombre;
    int lp;
    


public:
    LinkedList<Monster> mounstros_derrotados; 
    Jugador(string nombre, string raza);
    Jugador(string nombre, string raza, int _hp, int _lp);
    Jugador();
    ~Jugador();
    int get_hp();
    void set_hp(int hp);
    string get_raza();
    void set_raza(string raza);
    string get_nombre();
    void set_nombre(string nombre);
    int get_lp();
    void set_lp(int lp);
    void imprimirMensaje(bool vivo);

};




#endif // JUGADOR_H