
/**

 Klostervirus es la pandemia que la Organizaci�n Mundial de Salud prev� para el a�o
 2021. Para evitar la propagaci�n de la misma ha decidido comunicar cu�les son las
 caracter�sticas para pertenecer a los distintos grupos de riesgo.
 Riesgo moderado
    - Mujeres y hombres de m�s de 65 a�os de edad.
 Riesgo alto
     - Mujeres hasta 10 a�os de edad y m�s de 80 a�os de edad.
     - Hombres hasta 6 a�os de edad y m�s de 75 a�os de edad.

 Dados el g�nero y la edad de una persona. Calcular a qu� tipo de poblaci�n pertenece: "Riesgo
 alto", "Riesgo moderado" o "Sin riesgo" para contraer Klostervirus.
 */

#include <iostream>
using namespace std;

 int main()
 {

     int edad;
     char genero;

     cout << "Edad: ";
     cin >> edad;

     cout << "Genero (H- Hombre M- Mujer): ";
     cin >> genero;

     if((genero == 'M' && (edad <= 10 || edad >= 80)) ||
        (genero == 'H' && (edad <= 6 || edad >= 75))){

         cout << "Riesgo Alto" << endl;
     }
     else
     {
         if(edad > 65){
             cout << "Riesgo Moderado" << endl;
         }
         else{
             cout << "Sin Riesgo" << endl;
         }
     }

     return 0;
 }
