/**
    Dada una lista de 5 n�meros enteros, calcular e informar el primer y segundo
    n�mero par ingresado. De no haber primer o segundo par, informarlo con un
    mensaje.
*/
#include <iostream>
using namespace std;
int main(){

    int x, n, pri, seg;
    bool a, b;
    a = b = false;
    int resto;

    cout << "Resuelto con banderas" << endl;
    for(x=1; x<=5; x++){
        cout << "N�mero: ";
        cin >> n;

        ///resto = n%2;
        if (n%2 == 0){
            ///Verdadero - S� que n es par
            if (a == false){
                pri = n;
                a = true;
            }
            else{
                if (b == false){
                    seg = n;
                    b = true;
                }
            }
        }

    }
    cout << endl;
    if (a == true){
        cout << "Primer par: " << pri;
        cout << endl;
    }
    if (b == true){
        cout << "Segundo par: " << seg;
    }
    return 0;
}
