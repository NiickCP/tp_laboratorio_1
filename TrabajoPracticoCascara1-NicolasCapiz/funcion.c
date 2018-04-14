#include "funcion.h"
/** \brief Toma dos numeros y los suma
 *
 * \param hacemos una variable para guardar el resultado
 * \param mandamos el resultado a esa varibable
 * \return devolvemos la variable con el resultado
 *
 */

int suma(int numA, int numB)
{
    int resultado;
    resultado=numA+numB;
    return resultado;
}
/** \brief Toma dos numeros y los resta
 *
 * \param hacemos una variable para guardar el resultado
 * \param mandamos el resultado a esa varibable
 * \return devolvemos la variable con el resultado
 *
 */
int resta(int numA, int numB)
{
    int resultado;
    resultado=numA-numB;
    return resultado;
}
/** \brief Toma dos numeros y los divide
 *
 * \param hacemos una variable para guardar el resultado
 * \param mandamos el resultado a esa varibable
 * \return devolvemos la variable con el resultado
 *
 */
float division(double numA, double numB)
{
    float resultado;
    resultado=numA/numB;
    return resultado;
}
/** \brief Toma dos numeros y los multiplica
 *
 * \param hacemos una variable para guardar el resultado
 * \param mandamos el resultado a esa varibable
 * \return devolvemos la variable con el resultado
 *
 */
int multiplicacion(int numA, int numB)
{
    int resultado;
    resultado=numA*numB;
    return resultado;
}
/** \brief Toma un numero y saco su factorial
 *
 * \param hacemos un if para comprobar que el numero este en el rango permitido
 * \param hacemos una variable para guardar el resultado
 * \param mandamos el resultado a esa varibable
 * \return devolvemos la variable con el resultado
 *
 */
long long int factorial(int numA)
{
    int i;
    long long int resultado=1;
    if (numA>=0 && numA<=12)
    {
        for(i=1; i<=numA;i++)
        {
            resultado=resultado*i;
        }
        return resultado;
    }
    else
    {
        printf("El numero ingresado es incorrecto solo se puede sacar el factorial de los numeros que se encuentren entre el 0 al 12 inclusive");
    }
}

