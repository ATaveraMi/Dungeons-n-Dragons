#include "Node.h"
#include "Monster.h"
#include "Calabozo.h"
template <typename T>
Node<T>::Node(T value) {
    this->data=value;
    this->next=nullptr;
}

template <typename T>
T Node<T>::getData() const {
    return data;
}






template <typename T>
void Node<T>::setData(T value) {
    data = value;
}

template <typename T>
Node<T>* Node<T>::getNext() const {
    return next;
}

template <typename T>
void Node<T>::setNext(Node* node) {
    next = node;
}
template class Node<int>;
template class Node<Monster>;
template class Node<Calabozo>;

