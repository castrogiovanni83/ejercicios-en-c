#ifndef ANGEL_H_INCLUDED
#define ANGEL_H_INCLUDED

/**
    Carga un vector de enteros de un tama�o que se env�a como par�metro
*/
void cargar_vector(int [], int);

/**
    Muestra un vector de enteros de un tama�o que env�a como par�metro
*/
void mostrar_vector(int [], int);

/**
    Retorna el m�ximo elemento del vector de enteros cuyo tama�o
    se env�a como par�metro.
*/
int buscar_maximo(int [], int);

/**
    Retorna la cantidad de veces que aparece el par�metro valor en un vector
    cuyo tama�o se env�a como par�metro.
*/
int contar_apariciones(int [], int, int);

#endif // ANGEL_H_INCLUDED
