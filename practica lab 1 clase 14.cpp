#include <iostream>
using namespace std;
#include <cstring>

int main(){
    int r;
    char cadena1[10];
    char cadena2[10];

    cout << "Ingresar primer cadena : ";
    cin >> cadena1;
    cout << "Ingresar segunda cadena: ";
    cin >> cadena2;
    cout << endl;
    /// Igual a strcmp pero es indistinto la may�scula y la min�scula (no es case-sensitive)
    r = strcasecmp(cadena1, cadena2);
    cout << r << endl;
    if (r > 0){
        cout << cadena1 << " est� despu�s que " << cadena2;
    }
    else{
        if (r < 0){
            cout << cadena1 << " est� antes que " << cadena2;
        }
        else{
            cout << "Son iguales";
        }
    }


    /* Sting compare
        int strcmp(a, b);
        0  - Si a == b
        >0 - Si a > b
        <0 - Si a < b
    */



    /* String copy
        a = b;
        strcpy (a, b);
        Copia el segundo par�metro en el primero.
    */
    /*strcpy(cadena2, cadena1);
    cout << endl;
    cout << cadena2;*/

    return 0;
}
