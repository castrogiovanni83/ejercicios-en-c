#include <iostream>

using namespace std;


int main (){

int numeroMaximo;
int numeroMinimo;
int numeroAbsoluto;

cout<< "ingresar el primer numero" << endl;
cin>> numeroMaximo;
cout<< "ingresar el segundo numero" << endl;
cin>> numeroMinimo;

if (numeroMaximo >=numeroMinimo){
    numeroAbsoluto = numeroMaximo - numeroMinimo;
    cout<< " el valor absoluto es" << endl;
        cout<< numeroAbsoluto;
        }

    else {
    numeroAbsoluto = numeroMinimo - numeroMaximo;
    cout<< " el valor absoluto es" <<endl;
        cout<< numeroAbsoluto;
}

return 0;

}
