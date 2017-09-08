#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int num1;
int num2;

/**
  * \brief Recibe el primer número para calcular
  * \return Primer número ingresado por el usuario
  *
  */
int pedir1()
{
    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    return num1;
}

/**
  * \brief Recibe el segundo número para calcular
  * \return Segundo número ingresado por el usuario
  *
  */
int pedir2()
{
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);
    return num2;
}

/**
  * \brief Recibe ambos numeros ingresados por el usuario
  * \return Calcula la suma de los numeros
  *
  */
int suma()
{
    int resultado1;
    resultado1 = num1 + num2;
    printf("La suma es %d\n\n", resultado1);
    return resultado1;
}

/**
  * \brief Recibe ambos numeros ingresados por el usuario
  * \return Calcula la resta de los numeros
  *
  */
int resta()
{
    int resultado2;
    resultado2 = num1 - num2;
    printf("La resta es %d\n\n", resultado2);
    return resultado2;
}

/**
  * \brief Recibe ambos numeros ingresados por el usuario
  * \return Calcula el producto de los numeros
  *
  */
int producto()
{
    int resultado3;
    resultado3 = num1 * num2;
    printf("El producto es %d\n\n", resultado3);
    return resultado3;
}

/**
  * \brief Recibe ambos numeros ingresados por el usuario
  * \return Calcula la division de los numeros
  *
  */
int division()
{
    int resultado4;
    if(num2 == 0)
    {
        printf("No se puede dividir por 0\n\n");
    }
    else
    {
        resultado4 = num1 / num2;
        printf("La division es %d\n\n", resultado4);
    }
    return resultado4;
}

/**
  * \brief Recibe ambos numeros ingresados por el usuario
  * \return Calcula el factorial de los numeros
  *
  */
long long int factorial()
{
    long long int fac;
    fac = num1;
    long long int i = fac - 1;
    long long int factorial = num1;
    while(i >= 1)
    {
        factorial = factorial * i;
        i--;
    }
    printf("El factorial de %lli es %lli\n\n", fac, factorial);
    return factorial;
}
