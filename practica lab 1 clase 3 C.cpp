/**
Hacer un programa que solicite el ingreso de 10 n�meros enteros positivos y calcule e
informe el mayor de los n�meros.
*/
#include <iostream>
using namespace std;

int main(){
  int n, i, maximo=0;

  for(i=1; i<=10; i++){
    cout << "Ingresar un n�mero: ";
    cin >> n;

    if(n > maximo){
      maximo = n;
    }

  }

  cout << "El n�mero m�ximo es: " << maximo << endl;

  return 0;
}
