#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include "personas.h"
#define TAM 20

/*

ALUMNO: Pablo Scandora
DIVISION: 1° "B"

*/

int main()
{
    system("COLOR 1F");
    int seguir = 1;
    int opcion = 0;
    ePersona personas[TAM];
    inicioACero(personas, TAM);

    while(seguir == 1)
    {
        printf("1) Agregar persona\n");
        printf("2) Borrar persona\n");
        printf("3) Imprimir lista ordenada por nombre\n");
        printf("4) Imprimir grafico de edades\n");
        printf("5) Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
            agregarPersona(personas, TAM);
            break;
        case 2:
            borrarPersona(personas, TAM);
            break;
        case 3:
            ordenarPersonas(personas, TAM);
            mostrarPersonas(personas, TAM);
            break;
        case 4:
            grafico(personas, TAM);
            break;
        case 5:
            seguir = 0;
            break;
        default:
            printf("Ingrese una opcion entre 1 y 5\n");
            break;
        }
    }
    return 0;
}
