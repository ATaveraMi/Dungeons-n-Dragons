#ifndef HASHTABLE_H
#define HASHTABLE_H
#include "Spell.h"

class Hashtable{
    private :
        Spell* table[30];
        int hash(int id);
    public:
        Hashtable();
        void insert(Spell spell);
        void remove(int id);
        Spell get(int id);
        void print();
        int findSpell(Spell spell);
};

#endif