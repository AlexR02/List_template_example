#ifndef LIST_H
#define LIST_H

#include "Node.h"

using namespace std;

template <typename T>
class List{
    private:
        int size;
        Node<T> *head;

    public:
        List();
        int getSize();
        void add(T value);
        int find(T idx);
        void remove(int idx);
        void showAll();
};

template <typename T>
List<T>::List(){
    this->size = 0;
    this->head = nullptr;
}

//Adiciona um novo Nó ao final da lista
template <typename T>
void List<T>::add(T value){
    Node<T> *newNode = new Node<T>(value);

    if(!this->head){
        this->head = newNode;
        this->size++;
        return;
    }

    Node<T> *temp = this->head;
    while(temp->getNext()){
        temp = temp->getNext();
    }

    temp->setNext(newNode);
    this->size++;
}

//Imprime todos os valores da lista
template <typename T>
void List<T>::showAll(){
    Node<T> *temp = this->head;
    int i = 0;
    while(temp){
        cout << temp->getValue();
        if(this->size > ++i)
            cout << " -> ";
        temp = temp->getNext();
    }
    cout << endl;
}

//Recebe um valot T como parâmtro e o procura na lista caso encontre-o retorna o seu idx
//caso não encontre retorna -1
template <typename T>
int List<T>::find(T value){
    Node<T> *temp = this->head;
    int i = 0;

    if(!this->head){
        throw std::out_of_range ("Lista está vazia");
    }

    while(temp && temp->getValue() != value){
        temp = temp->getNext();
        i++;
    }

    return temp ? i : -1;
}

//Apaga o Nó na posição idx passada
template <typename T>
void List<T>::remove(int idx){
    if(this->size == 0 || this->size < idx){
        throw std::out_of_range ("Tá grande de mais esse número maluco");
    }

    if(this->size == 1){
        delete this->head;
        this->head = nullptr;
        this->size = 0;
        return;
    }

    int i = 0;
    Node<T> *aux1 = this->head;
    Node<T> *aux2 = nullptr;
    while(i++ < idx){
        aux2 = aux1;
        aux1 = aux1->getNext();
    }
    aux2->setNext(aux1->getNext());
    delete aux1;
    this->size--;
}

//Retorna o tamanho da lista
template <typename T>
int List<T>::getSize(){
    return this->size;
}

#endif