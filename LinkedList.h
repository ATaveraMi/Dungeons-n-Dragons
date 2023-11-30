#ifndef LINKED_LIST_H
#define LINKED_LIST_H
#include "Node.h"
#include "Monster.h"
template <typename T>
class LinkedList{
private:
    Node<T> *first;
    
public:
    LinkedList();
    void addNode(Node<T> *node);
    void print();
    int find(T data);
    void swap(int x,int y);
    Node<T>* findAtPos(int pos);
    void bubbleSort();
    void addNode(T data);
    Node<T>* getFirst() {
        return first;
    }
};
#endif