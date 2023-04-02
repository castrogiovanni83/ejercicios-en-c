#include <iostream>
#include <stdlib.h>

using namespace std;


int main (){

float precio = 0;
float descuento1 = 0;
float descuento2 = 0;
float descuento3 = 0;
float total = 0;
float total2 = 0;
float total3 = 0;


cout<< "ingresar precio" << endl;
cin>> precio;



if (precio < 100 ){
       cout<< "descuento del 5%" <<endl;
      descuento1 = precio * 5 /100;
    cout<< descuento1 <<endl;
    cout<< "el total es"<<endl;
      total = precio - descuento1;
    cout<< total <<endl;

}

else{
    if (precio >= 500){
    cout<<"descuento del 15%" << endl;
    descuento2 = precio * 15 /100;
    cout<< descuento2 << endl;
    cout<< "el total es" <<endl;
     total2 =  precio -descuento2;
    cout<< total2 <<endl;
}

  if (precio < 500){
        descuento3 = precio * 10 /100;
    cout<<  "descuento del 10%" << endl;
        cout<< descuento3 << endl;
    cout<< "el total es" <<endl;
    total3 = precio - descuento3;
    cout<< total3 << endl;
  }


}
return 0;
}
