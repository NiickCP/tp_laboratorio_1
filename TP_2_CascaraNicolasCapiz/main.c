#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "funciones.h"

#define tam 20

int main()
{
    EPersona lista[20];
    nuevoVector(lista,20);
    char seguir='s';
    int opcion=0;


    while(seguir=='s')
    {
        system("cls");
        printf("----------Lista de Empleados---------------\n");
        printf("+1- Agregar persona                       +\n");
        printf("+2- Borrar persona                        +\n");
        printf("+3- Imprimir lista ordenada por  nombre   +\n");
        printf("+4- Imprimir grafico de edades            +\n");
        printf("+5- Salir                                 +\n");
        printf("-------------------------------------------\n\n\n");
        printf("Ingrese opcion: ");

        scanf("%d",&opcion);

        while(opcion<1||opcion>5)
        {
            printf("Error. El numero ingresado es incorrecto.");
            scanf("%d",&opcion);
        }
        switch(opcion)
        {
        case 1:
            system("cls");
            altaPersona(lista,tam);
            break;
        case 2:
            system("cls");
            bajaPersona(lista,tam);
            getch();
            break;
        case 3:
            system("cls");
            mostrarPersonasTotal(lista,tam);
            getche();
            break;
        case 4:
            system("cls");
            grafico(lista,tam);
            getch();
            break;
        case 5:
            seguir = 'n';
            break;
        }
    }

    return 0;
}
