// Hacer un programa para ingresar por teclado un número y luego informar por
// pantalla con un cartel aclaratorio si el mismo es par o impar.

#include <iostream>
#include <stdlib.h>

using namespace std;


int main (){

int numero;

cout<< "ingresar numero" << endl;
cin>> numero;

if (numero % 2 == 0 ){
            cout<< "el numero es par";
}
else {cout<< " es impar";

}
return 0;

}
