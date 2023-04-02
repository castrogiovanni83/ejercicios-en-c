#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
int temperaturaMaxima;
int temperaturaMinima;
int amplitudTermica;

cout<< "ingresar la temperatura maxima" <<endl;
cin>> temperaturaMaxima;
cout<< "ingresar la temperatura minima" <<endl;
cin>> temperaturaMinima;
cout<< "la temperatura maxima es"<< endl;
cout<< temperaturaMaxima << endl;
cout<< " la temperatura minima es"<< endl;
cout<< temperaturaMinima << endl;
if (temperaturaMaxima> temperaturaMinima){

amplitudTermica = temperaturaMaxima - temperaturaMinima;
cout<< " la amplitud termica es de" <<endl;
cout<< amplitudTermica ;
}
else {
    cout<< " la temperatura es incorrecta" <<endl;

}




}
