/**
    Dada una lista de 5 n�meros enteros, calcular e informar el primer y segundo
    n�mero par ingresado. De no haber primer o segundo par, informarlo con un
    mensaje.
*/
#include <iostream>
using namespace std;
int main(){

    int x, n, pri, seg;
    int contpar=0;
    int resto;

    for(x=1; x<=5; x++){
        cout << "N�mero: ";
        cin >> n;

        ///resto = n%2;
        if (n%2 == 0){
            ///Verdadero - S� que n es par
            contpar++;
            if (contpar == 1){
                /// Ee el primer par
                pri = n;
            }
            else{
                if (contpar == 2){
                    seg = n;
                }
            }
        }

    }
    cout << endl;
    if (contpar >= 1){
        cout << "Primer par: " << pri;
        cout << endl;
    }
    if (contpar >= 2){
        cout << "Segundo par: " << seg;
    }
    return 0;
}
