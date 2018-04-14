#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include "funciones.c"

int main()
{
    char seguir='s';
    int opcion=0;
    int numA=0;
    int numB=0;
    int reSuma,reResta,reMult,reFactorial;
    float reDiv;

    while(seguir=='s')
    {
        system("cls");
        printf("1- Ingresar 1er operando (A=x)\n");
        printf("2- Ingresar 2do operando (B=y)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                printf("Ingrese 1er operando: ");
                scanf("%d",&numA);
                break;
            case 2:
                printf("Ingrese 2do operando: ");
                scanf("%d",&numB);
                break;
            case 3:
                reSuma=suma(numA,numB);
                printf("La suma es: %d\n",reSuma);
                break;
            case 4:
                reResta=resta(numA,numB);
                printf("La resta es: %d\n",reResta);
                break;
            case 5:
                reDiv=division(numA,numB);
                printf("La division es: %g\n",reDiv);
                break;
            case 6:
                reMult=multiplicacion(numA,numB);
                printf("La multiplicacion es %d\n", reMult);
                break;
            case 7:
                reFactorial=factorial(numA);
                printf("\n\nel factorial del numero %d es: %d\n",numA, reFactorial);
                printf("\n\npresione una tecla para volver al menu\n\n ");
                break;
            case 8:
                reSuma=suma(numA,numB);
                printf("La suma es: %d\n",reSuma);
                reResta=resta(numA,numB);
                printf("La resta es: %d\n",reResta);
                reDiv=division(numA,numB);
                printf("La division es: %g\n",reDiv);
                reMult=multiplicacion(numA,numB);
                printf("La multiplicacion es %d\n", reMult);
                reFactorial=factorial(numA);
                printf("\n\nel factorial del numero %d es: %d\n",numA, reFactorial);
                printf("\n\npresione una tecla para volver al menu\n\n ");
                break;
            case 9:
                seguir = 'n';
                break;
            default:
            printf("La opcion ingresada es incorrecta.\n");
                break;
        }

    }
return 0;
}
