/* Hacer un programa que solicite una lista de n�meros que finaliza cuando se ingresa el
n�mero cero. Calcular e informar la cantidad de n�meros impares de la lista e informar
cu�l fue el primero de los impares ingresados */


#include <iostream>
using namespace std;

int main(){
    int n=0, ci=0, primer_impar=0;

    cout << "Ingresar numero: ";
    cin >> n;
    while(n != 0){
        if (n%2 != 0){
            ci++;
            if (ci == 1){
                primer_impar = n;
            }
        }

        cout << "Ingresar nUmero: ";
        cin >> n;
    }
    cout << endl;
    cout << "A) Cantidad de numeros impares: " << ci << endl;
    if (ci > 0){
        cout << "B) Primer impar: " << primer_impar << endl;
    }
    else{
        cout << "B) No hubo impares." << endl;
    }
    return 0;
}
