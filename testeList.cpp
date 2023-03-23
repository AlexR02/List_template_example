#include "List.h"

int main(){

    List<int> lista;
    for(int i = 1; i < 11; i++){
        lista.add(i);
    }

    lista.showAll();
    cout << "List size: " << lista.getSize() << endl << endl;

    int idxFind = 5;
    cout << "A posição " << idxFind << " contém o valor: " << lista.find(idxFind) << endl << endl;

    int idxRemove = 8;
    cout << "Remove posicao: " << idxRemove << endl; 
    lista.remove(idxRemove);

    lista.showAll();
    cout << "List size: " << lista.getSize() << endl << endl;

    int idxInsere = 0;
    cout << "Insera na posicao: " << idxInsere << endl;
    lista.addAt(99, idxInsere);

    lista.showAll();
    cout << "List size: " << lista.getSize() << endl;
    return 0;
}