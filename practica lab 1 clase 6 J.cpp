/**
    Dada una lista de n�meros enteros que finaliza con un n�mero par. Calcular e informar
    el m�ximo de los n�meros ingresados.
    NOTA: El n�mero con que finaliza la lista puede ser el m�ximo a informar.
    5, 15, 2 --> Termina la lista. M�ximo 15
    5, 15, 20 --> Termina lista. M�ximo 20.
*/
#include <iostream>
using namespace std;
int main(){
    int n=1, maximo=0;
    while (n%2 != 0){
        cout << "N�mero: ";
        cin >> n;
        if (n > maximo){
            maximo = n;
        }
    }
    cout << "M�ximo de la lista: " << maximo << endl;

    return 0;
}
