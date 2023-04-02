/**
Un banco ha decidido otorgar pr�stamos a 12 cuotas con tasa de inter�s bonificada a
los monotributistas de diferentes categor�as. Las mismas son:
Categor�a Tasa de inter�s
A, B y C    12%
D, E y F    20%
G           22%
Las dem�s categor�as (H, I, J y K) no podr�n solicitar ning�n pr�stamo bonificado. Por lo
que deber�n tramitarlo por otro medio.
Dada la categor�a de una persona y el importe a solicitar en concepto de pr�stamo,
elaborar una salida como la siguiente:
Categor�a: C
Importe solicitado: $ 50000
----------------------------
Inter�s %: 12%
Inter�s $: $6000
Importe a devolver sin IVA: $ 56000
Importe a devolver con IVA: $ 67760
Valor de la cuota: $ 5646.66
*/

#include <iostream>
using namespace std;

int main(){
  float importe, interes2, importe_dev, importe_dev_iva, cuota;
  char categoria;
  int interes1;

  interes1=interes2=importe_dev=importe_dev_iva=cuota=0;

  cout << "Ingresar categor�a de monotributo: ";
  cin >> categoria;

  cout << "Ingresar importe: $";
  cin >> importe;

  switch (categoria){
    case 'A':
    case 'B':
    case 'C':
      ///12
      interes1 = 12;
      interes2 = importe * 0.12;
      importe_dev = importe * 1.12;
      importe_dev_iva = importe_dev * 1.21;
      cuota = importe_dev_iva / 12;
    break;

    case 'D':
    case 'E':
    case 'F':
      ///20
      interes1 = 20;
      interes2 = importe * 0.2;
      importe_dev = importe * 1.2;
      importe_dev_iva = importe_dev * 1.21;
      cuota = importe_dev_iva / 12;
    break;

    case 'G':
      ///22
      interes1 = 22;
      interes2 = importe * 0.22;
      importe_dev = importe * 1.22;
      importe_dev_iva = importe_dev * 1.21;
      cuota = importe_dev_iva / 12;
    break;

    default:
      cout << endl << "Categor�a no inclu�da en los beneficios." << endl;
      return 0;
    break;

  }
  cout << endl << endl;
  cout << "Categor�a:   " << categoria << endl;
  cout << "Importe  : $ " << importe << endl;
  cout << "-----------------------------------" << endl;
  cout << "Inter�s:  " << interes1 << endl;
  cout << "Inter�s: $" << interes2 << endl;
  cout << "Importe a devolver: $ " << importe_dev << endl;
  cout << "Importe a devolver (IVA): $" << importe_dev_iva << endl;
  cout << "Valor de la cuota: $ " << cuota << endl;

  return 0;
}
