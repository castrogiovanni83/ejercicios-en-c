/**
Hacer un programa para ingresar por teclado las cuatro notas de los ex�menes obtenidas por un alumno y
luego emitir uno solo de los carteles de acuerdo a las siguientes condiciones:
-�Promociona�, si obtuvo en los cuatro ex�menes nota 7 o m�s.
-�Rinde examen final�, si obtuvo nota 4 o m�s en por lo menos tres ex�menes.
-�Recupera Parciales�, si obtuvo nota 4 o m�s en por lo menos uno de los ex�menes.
-�Recursa la materia�, si no aprob� ning�n examen parcial.
*/
#include <iostream>
using namespace std;

int main(){
  int n, c7, c4, i;
  c7=0;
  c4=0;

  for(i=1; i<=4; i++){
    cout << "Ingresar nota: ";
    cin >> n;
    if (n >= 7){
      c7++;
    }
    else{
      if (n >= 4){
        c4++;
      }
    }
  }

  if (c7 == 4){
    cout << "Promociona la materia.";
  }
  else{
    if (c7+c4 >= 3){
      cout << "Rinde examen final.";
    }
    else{
      if (c7+c4 >= 1){
        cout << "Recupera parciales";
      }
      else{
        cout << "Recursa la materia";
      }
    }
  }

  return 0;
}
