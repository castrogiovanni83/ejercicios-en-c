#include <iostream>
#include <stdlib.h>


using namespace std;

int main (){

int PrimerNumero = 0;
int SegundoNumero = 0;
int TercerNumero = 0;

cout<< "ingresar el primer numero"<<endl;
cin>> PrimerNumero;
cout<< "ingresar el primer numero"<<endl;
cin>> SegundoNumero;
cout<< "ingresar el primer numero"<<endl;
cin>> TercerNumero;

if ((PrimerNumero == SegundoNumero)&&( SegundoNumero == TercerNumero)){
    cout<< "los tres numeros son iguales"<<endl;
}

if ((PrimerNumero == SegundoNumero)&&( PrimerNumero != TercerNumero)){
cout<< "el primer y el segundo numero son iguales"<<endl;


}
else if ((PrimerNumero != SegundoNumero)&&( SegundoNumero == TercerNumero)) {
 cout<< "el segundo y el tercero son iguales"<<endl;
}

if ((PrimerNumero != SegundoNumero)&&( SegundoNumero != TercerNumero)) {
 cout<< "los tres numeros son distintos"<<endl;

}

return 0;
}
