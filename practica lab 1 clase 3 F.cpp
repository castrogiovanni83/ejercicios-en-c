#include <iostream>
using namespace std;

int main(){
  char bebida;
  char empanadas;

  cout << "�Trajiste bebidas? (S/N) ";
  cin >> bebida;

  cout << "�Trajiste empanadas? (S/N) ";
  cin >> empanadas;
  cout << endl;

  if (bebida == 'S' || empanadas == 'S'){
    cout << "Pod�s entrar a la reuni�n";
  }
  else{
    cout << "No pod�s entrar a la reuni�n.";
  }

  return 0;
}
