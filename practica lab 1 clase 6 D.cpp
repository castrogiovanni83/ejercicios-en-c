/**
Hacer un programa que solicite el ingreso de un n�mero entero. Solicitar indefinidamente
el n�mero mientras no se ingresa un n�mero en el rango [1; 5]. Contar la cantidad de
veces que ingresaron err�neamente el ingreso.
*/

#include <iostream>
using namespace std;

int main(){
    int n, c=0;
    cout << "Ingresar un n�mero [1-5]: ";
    cin >> n;

    /// C�digo para validar que n sea correcto [1-5]
    ///while (!(n >= 1 && n <= 5)){
    while(n < 1 || n > 5){
        cout << endl << "Reingresar el n�mero [1-5]: ";
        cin >> n;
        c++;
    }

    cout << endl << "El n�mero ingresado es: " << n;
    cout << endl << "Cantidad de errores   : " << c;

    return 0;
}
