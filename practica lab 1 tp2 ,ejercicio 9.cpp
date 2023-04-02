#include <iostream>
#include <stdlib.h>

using  namespace std;

int main (){
int numero1 =0;
int numero2 =0;
int numero3 =0;


cout<< "ingrese el primer numero"<<endl;
cin>> numero1;

cout<< "ingrese el segundo numero"<<endl;
cin>> numero2;

cout<< "ingrese el tercer numero"<<endl;
cin>> numero3;

if (numero1>numero2){
        cout<< "el primer numero es el mayor"<< numero1 <<endl;
    if (numero1>numero3){
        cout<< "el primer numero es el mayor"<< numero1 <<endl;
            }
    else if (numero2 >numero3){
        cout<< "el segundo es el mayor"<< numero2<< endl;
            }
    cout<<"el tercero es el mayor"<< numero3 << endl;


}


return 0;

}
