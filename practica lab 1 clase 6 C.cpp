#include <iostream>
using namespace std;

int main(){
    int n, c=-1;

    do{
        cout << "Ingresar n�mero: ";
        cin >> n;
        c++;
    }while(n < 1 || n > 5);

    cout << endl << "N�mero ingresado   : " << n;
    cout << endl << "Cantidad de errores: " << c;

    return 0;
}
