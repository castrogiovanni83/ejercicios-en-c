#include <iostream>
using namespace std;
#include "angel.h"

int main()
{
    const int T = 5;
    int v[T];
    int maximo;
    int cantidad;

    cout << "Vector 1" << endl;
    cargar_vector(v, T);
    cout << endl << endl;
    mostrar_vector(v, T);
    cout << endl << endl;
    maximo = buscar_maximo(v, T);
    cout << "El m�ximo del vector es: " << maximo << endl << endl;
    cantidad = contar_apariciones(v, T, maximo);
    cout << "El m�ximo valor aparece " << cantidad << " veces." << endl;
    return 0;
}
