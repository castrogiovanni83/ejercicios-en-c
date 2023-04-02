/**
Hacer un programa que solicite n�meros que pueden ser positivos, negativos o cero. La
carga de datos finaliza cuando se ingresa un n�mero igual al anterior. Mostrar por
pantalla "Positivos" si hubo un 75% o m�s de positivos o "Negativos" si hubo un 75% o
m�s de negativos.
10 9 7 -4 0 4 6 10 7 7
10 9 -3 -3
*/

#include <iostream>
using namespace std;

int main(){
    int n, anterior, c=0, pos=0, neg=0;
    bool continuar = true;
    float porp, porn;

    while (continuar == true){
        cout << "Ingresar un n�mero: ";
        cin >> n;
        c++;
        if (c > 1){
            if (n == anterior){
                continuar = false;
            }
        }
        anterior = n;
        /// Calculo de positivos y negativos
        if (n > 0){
            pos++;
        }
        else{
            if (n < 0){
                neg++;
            }
        }
    }
    porp = ((float)pos/c)*100;
    porn = ((float)neg/c)*100;

    if (porp >= 75){
        cout << "Positivos" << endl;
    }
    else{
        if (porn >= 75){
            cout << "Negativos" << endl;
        }
    }


    return 0;
}
