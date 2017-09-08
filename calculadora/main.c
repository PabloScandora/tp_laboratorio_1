#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "funciones.h"

/*  Alumno: Pablo Scandora
    División: 1°B */

int main()
{
    system("COLOR B0");
    int opcion = 0;
    int x = 0;
    int y = 0;
    char seguir = 's';

    while(seguir == 's')
    {
        printf("1) Ingresar el primer operando (A = %d)\n", x);
        printf("2) Ingresar el otro operando (B = %d)\n", y);
        printf("3) Calcular A + B\n");
        printf("4) Calcular A - B\n");
        printf("5) Calcular A * B\n");
        printf("6) Calcular A / B\n");
        printf("7) Calcular A!\n");
        printf("8) Calcular todas las operaciones mencionadas\n");
        printf("9) Salir de la calculadora\n\n");

        scanf("%d", &opcion);

        switch(opcion)
        {
        case 1: //Pedir num
            x = pedir1();
            break;
        case 2: //Pedir otro num
            y = pedir2();
            break;
        case 3: //Suma
            suma();
            break;
        case 4: //Resta
            resta();
            break;
        case 5: //Multiplicar
            producto();
            break;
        case 6: //Dividir
            division();
            break;
        case 7: //Factorial
            factorial();
            break;
        case 8: // Todo
            suma();
            resta();
            producto();
            division();
            factorial();
            break;
        case 9: //Salida
            seguir = 'n';
            break;
        }

    }

    return 0;
}
