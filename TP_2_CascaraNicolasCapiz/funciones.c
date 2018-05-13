#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

void  nuevoVector(EPersona lista[], int tam)
{
    int i;

    for(i=0; i<tam; i++)
    {
       estadoCero(lista,i);
    }

}
//Tal vez este mal el for y solo tengo que mandar directamente a todo el array un cero.
void estadoCero(EPersona lista[], int i)
{
    strcpy(lista[i].nombre,"\0");
    lista[i].estado=0;
    lista[i].dni=0;
    lista[i].edad=0;
}

void recorridoCero(EPersona lista[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        estadoCero(lista,i);
    }
}
int obtenerEspacioLibre(EPersona lista[], int tam)
{
    int i;
    int flag=-1;
    for(i=0; i<tam; i++)
    {
        if(lista[i].estado==0)
        {
            flag=i;
            lista[i].estado=1;
            break;
        }
    }
    return flag;
}

void mostrarPersonasTotal(EPersona lista[], int tam)
{
    int flag=-1;
    int i, j, k;
    EPersona aux;
    printf("\nNOMBRE\t\tEDAD\t\tDNIn");
    printf("---------------------------------------------------\n");
    for(j=0 ; j < tam-1 ; j++)
    {
        for(k=j+1 ; k < tam ; k++)
        {
            if((strcmp(lista[j].nombre , lista[k].nombre) > 0))
            {
                aux = lista[j];
                lista[j] = lista[k];
                lista[k] = aux;
            }
        }
    }
    for(i=0; i<tam; i++)
    {
        if(lista[i].estado==1&&lista[i].edad>0&&lista[i].edad<99)
        {
            printf("%s\t\t%d\t\t%d\n", lista[i].nombre,lista[i].edad,lista[i].dni);
            flag=1;
        }
    }
    if(flag==-1)
    {
        printf("\nNo hay personas para mostrar.\n ");
        getch();
    }
}

void altaPersona(EPersona lista[],int tam)
{
    EPersona nuevaPersona;
    int libreDNI;
    int libre;
    int DNI;
    libre=obtenerEspacioLibre(lista,tam);
    if (libre==-1)
    {
        printf("\nNo hay espacio libre\n");
    }
    else
    {
        printf("\nIngrese su DNI: ");
        scanf("%d",&DNI);
        while(DNI>100000000||DNI<0)
        {
            printf("\nEl DNI ingresado no existe, intente nuevamente: ");
            scanf("%d",&DNI);
        }
        libreDNI=buscarDni(lista,DNI,tam);
       }
       if(libreDNI!=-1)
        {
            printf("\nEl DNI ingresado ya esta registrado.");
            getch();
        }
        else
        {
            nuevaPersona.dni=DNI;
            printf("\nIngrese su edad: ");
            scanf("%d",&nuevaPersona.edad);
            printf("\nIngrese su nombre: ");
            fflush(stdin);
            scanf("%s",nuevaPersona.nombre);
            nuevaPersona.estado=1;
            lista[libre]=nuevaPersona;
        }

}
int buscarDni(EPersona lista[],int DNI, int tam)
{

    int flagDni=-1;
    int i;
    for(i=0; i<tam; i++)
    {
        if (lista[i].dni==DNI)
        {
            flagDni=i;
            break;
        }
    }
    return flagDni;
}

void bajaPersona(EPersona lista[], int tam)
{
    char respuesta = 'n';
    int lugar;
    int DNI;
    printf("Ingrese DNI: ");
    scanf("%d",&DNI);
    lugar=buscarDni(lista,DNI,tam);
    if(lugar!=-1)
    {
        printf("%s\t\t%d\t\t%d\n", lista[lugar].nombre,lista[lugar].edad,lista[lugar].dni);
        printf("\nSi quiere confirmar la baja presion la tecla s .\n");
        respuesta = getch();
        if(respuesta=='s')
        {
            lista[lugar].estado=0;
            printf("\nLa baja a sido exitosa.");
        }
        else
            {
                printf("\nNo se pudo realizar la baja.");
            }

    }
}
void grafico(EPersona empleados[], int tam)
{
    int flag1=0,flag2=0,flag3=0,i,max=0,eeflag4=0;

    system("cls");

    for(i=0; i<tam; i++)
    {
        if(empleados[i].estado==1)
        {
            if(empleados[i].edad<18)
            {
                flag1++;
            }
            if(empleados[i].edad>17 && empleados[i].edad<36)
            {
                flag2++;
            }
            if(empleados[i].edad>35)
            {
                flag3++;
            }
        }
    }
    if(flag1>flag2 && flag1>flag3)
    {
        max=flag1;
    }

    else
    {
        if(flag2>flag1 && flag2>=flag3)
        {
            max=flag2;
        }
        else
        {
            max=flag3;
        }
    }
    for(i=max; i>0; i--)
    {
        if(i<=flag1)
        {
            printf("*");
        }
        if(i<=flag2)
        {
            eeflag4=1;
            printf("\t*");
        }
        if(i<=flag3)
        {
            if(eeflag4==0)
                printf("\t\t*");
            if(eeflag4==1)
                printf("\t*");
        }
        printf("\n");
    }
    printf("<18\t19-35\t>35\n");

    system("pause");
}



