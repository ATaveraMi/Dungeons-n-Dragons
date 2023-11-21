//
// Created by Andrés Tavera on 09/09/23.
//

#ifndef PROYECTODD_MONSTER_H
#define PROYECTODD_MONSTER_H
#include <iostream>
#include<string>
using namespace std;


class Monster {
    private:
    string name;
    float cr;
    string type;
    string size;
    int ac;
    int hp;
    string align;

    public:
    Monster();
    Monster(string name, float cr, string type, string size, int ac, int hp, string align);
    string getName();
    void setName(string name);
    float getCr();
    void setCr(float cr);
    string getType();
    void setType(string type);
    string getSize();
    void setSize(string size);
    int getAc();
    void setAc(int ac);
    int getHp();
    void setHp(int hp);
    string getAlign();
    void setAlign(string align);
    friend std::ostream& operator<<(std::ostream& os, const Monster& m) {
        os << "{Nombre: " << m.name << ", CR: " << m.cr << ", type: " << m.type
           << ", size: " << m.size << ", ac: " << m.ac << ", HP: " << m.hp << ", align: " << m.align << "}"<<endl;
        return os;}
    int operator >(Monster m){
        return this->hp>m.hp;
    }
    int operator <(Monster m){
        return this->hp==m.hp;
    }
    bool operator ==(Monster m){
        return this->hp==m.hp;
    }







};


#endif //PROYECTODD_MONSTER_H
