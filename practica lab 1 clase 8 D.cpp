/**
Ej 08 TP 04
Hacer un programa para ingresar una lista de n�meros que finaliza cuando se ingresa un
cero, luego informar el m�ximo y la posici�n del m�ximo en la lista. En caso de �empates�
considerar la primera aparici�n.
Ejemplo: 5, -10, 20, 8, 25, 13, 35, -8, -5, 20, 0. Se listar� M�ximo 35 Posici�n 7.
Ejemplo: 5, -10, 20, 8, 25, 13, 55, -8, 55, 20, 0. Se listar� M�ximo 55 Posici�n 7.
*/

#include <iostream>
using namespace std;
int main(){
    int n, maximo, posicion, i=0;
    cout << "N�mero: ";
    cin >> n;

    while (n != 0){
        i++;
        if (i == 1 || n > maximo){
            maximo = n;
            posicion = i;
        }
        cout << "N�mero: ";
        cin >> n;
    }
    cout << endl;
    cout << "M�ximo  : " << maximo << endl;
    cout << "Posici�n: " << posicion << endl;

    return 0;
}
