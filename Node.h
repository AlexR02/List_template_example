#ifndef NODE_H
#define NODE_H

#include <iostream>

using namespace std;

template <typename T>
class Node{
    private:
        Node<T> *next;
        T value;

    public:
        Node();
        Node(T value);
        T getValue();
        void setValue(T value);
        Node<T>* getNext();
        void setNext(Node<T> *next);
};

template <typename T>
Node<T>::Node(){
    Node *next = nullptr;
}

template <typename T>
Node<T>::Node(T value){
    Node *next = nullptr;
    this->value = value;
}

template <typename T>
T Node<T>::getValue(){
    return this->value;
}

template <typename T>
void Node<T>::setValue(T value){
    this->value = value;
}

template <typename T>
Node<T>* Node<T>::getNext(){
    return this->next;
}

template <typename T>
void Node<T>::setNext(Node<T> *next){
    this->next = next;
}

#endif