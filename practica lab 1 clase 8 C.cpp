/**
    Dada una lista de 5 n�meros enteros, calcular e informar el primer y segundo
    n�mero par ingresado. De no haber primer o segundo par, informarlo con un
    mensaje.
*/
#include <iostream>
using namespace std;
int main(){

    int x, n, pri=-1, seg=-1;
    int resto;

    cout << "Resuelto con banderas" << endl;
    for(x=1; x<=5; x++){
        cout << "N�mero: ";
        cin >> n;

        ///resto = n%2;
        if (n%2 == 0){
            ///Verdadero - S� que n es par
            if (pri == -1){
                pri = n;
            }
            else{
                if (seg == -1){
                    seg = n;
                }
            }
        }

    }
    cout << endl;
    if (pri != -1){
        cout << "primer par: " << pri;
        cout << endl;
    }
    if (seg != -1){
        cout << "segundo par: " << seg;
    }
    return 0;
}
