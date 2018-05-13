#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct {

    char nombre[50];
    int edad;
    int estado;
    int dni;

}EPersona;

void bajaPersona(EPersona lista[], int tam);
void nuevoVector(EPersona lista[], int tam);
void recorridoCero(EPersona lista[], int tam);
/**
 * Obtiene el primer indice libre del array.
 * @param lista el array se pasa como parametro.
 * @return el primer indice disponible
 */
int obtenerEspacioLibre(EPersona lista[],int tam);

/**
 * Obtiene el indice que coincide con el dni pasado por parametro.
 * @param lista el array se pasa como parametro.
 * @param dni el dni a ser buscado en el array.
 * @return el indice en donde se encuentra el elemento que coincide con el parametro dni
 */
int buscarDni(EPersona lista[], int DNI,int tam);
int contieneNumero(char str[]);
int contieneLetra(char str[]);

void estadoCero(EPersona lista[], int tam);
void altaPersona(EPersona lista[], int tam);
void mostrarPersonasTotal(EPersona lista[], int tam);
void grafico(EPersona empleados[], int tam);
#endif // FUNCIONES_H_INCLUDED

