#include "List.h"

int main(){

    List<int> lista;
    for(int i = 1; i < 11; i++){
        lista.add(i);
    }

    int valueFind = 3;

    cout << "find() retorna -1 valor não existe na lista" << endl;
    cout << "Valor " << valueFind << ", idx: " << lista.find(valueFind) << endl << endl;

    lista.showAll();
    cout << "List size: " << lista.getSize() << endl << endl;

    int idxRemove = 8;
    cout << "Remove posicao: " << idxRemove << endl; 
    lista.remove(8);

    lista.showAll();
    cout << "List size: " << lista.getSize() << endl;
    return 0;
}