//
// Created by Andrés Tavera on 09/09/23.
//

#include "Monster.h"

Monster::Monster(){
    name = "";
    cr = 0.0;
    type = "";
    size = "";
    ac = 0;
    hp = 0;
    align = "";
}
Monster::Monster(string name, float cr, string type, string size, int ac, int hp, string align){
    this->name = name;
    this->cr = cr;
    this->type = type;
    this->size = size;
    this->ac = ac;
    this->hp = hp;
    this->align = align;
}
string Monster::getName(){
    return name;
}
void Monster::setName(string name){
    this->name = name;
}
float Monster::getCr(){
    return cr;
}
void Monster::setCr(float cr){
    this->cr = cr;
}
string Monster::getType(){
    return type;
}
void Monster::setType(string type){
    this->type = type;
}
string Monster::getSize(){
    return size;
}
void Monster::setSize(string size) {
    this->size = size;
}
int Monster::getAc(){
    return ac;
}
void Monster::setAc(int ac){
    this->ac = ac;
}
int Monster::getHp(){
    return hp;
}
void Monster::setHp(int hp){
    this->hp = hp;
}
string Monster::getAlign(){
    return align;
}
void Monster::setAlign(string align) {
    this->align = align;
}