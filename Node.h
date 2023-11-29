#ifndef NODE_H
#define NODE_H

template <typename T>
class Node {
private:
    T data;
    Node* next;

public:
    Node(T value);

    T getData() const;
    void setData(T value);
    Node* getNext() const;
    void setNext(Node* node);
    
};

#endif