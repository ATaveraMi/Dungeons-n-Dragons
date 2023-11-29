#include "Hashtable.h"

Hashtable::Hashtable(){
    for(int i = 0; i < 30; i++){
        table[i] = nullptr;
    }
}
void Hashtable::insert(Spell spell){
    int index= hash(spell.getEfecto());
    if(table[index]==nullptr){
        table[index]=&spell;
    }else{
        int i=index;
        while(table[i]!=nullptr){
            i++;
            if(i==30){
                i=0;
            }
            if(i==index){
                cout<<"Spells llenos"<<endl;
                return;
            }
        }
        table[i]=&spell;
    }


}
Spell Hashtable::get(int id){
    int index=hash(id);
    if(table[index]==nullptr){
        cout<<"No existe"<<endl;
        return Spell();
    }else{
        int i=index;
        while(table[i]!=nullptr){
            if(table[i]->getEfecto()==id){
                return *table[i];
            }else{
                i++;
                if(i==30){
                    i=0;
                }
                if(i==index){
                    cout<<"No existe"<<endl;
                    return Spell();
                }
            }
        }
    }
    return Spell();
}
void  Hashtable::print(){
    for(int i=0;i<30;i++){
        if(table[i]!=nullptr){
            cout<<(i)<<".-"<<table[i]->toString()<<endl;
        }else{
            cout<<(i)<<".-"<<" Vacío"<<endl;
        
        }
    }
}
int  Hashtable::findSpell(Spell spell){
    int index=hash(spell.getEfecto());
    if(table[index]==nullptr){
        cout<<"No existe"<<endl;
    }else{
        int i=index;
        while(table[i]!=nullptr){
            if(table[i]->getEfecto()==spell.getEfecto()){
                return i;
            }else{
                i++;
                if(i==30){
                    i=0;
                }
                if(i==index){
                    cout<<"No existe"<<endl;
                    return -1;
                }
            }
        }
    }
    return -1;
}

int Hashtable::hash(int id){
    return id % 90;
}