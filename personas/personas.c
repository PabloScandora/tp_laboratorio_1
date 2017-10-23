#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include "personas.h"

void inicioACero(ePersona lista[], int t)
{
    int i;
    for(i = 0; i < t; i++)
    {
        lista[i].estado = 0;
    }
}

int obtenerEspacioLibre(ePersona lista[], int t)
{
    int i;
    int espacio = -1;
    for(i = 0; i < t; i++)
    {
        if(lista[i].estado == 0)
        {
            espacio = i;
            break;
        }
    }
    return espacio;
}

void agregarPersona(ePersona persona[], int t)
{
    int j;
    j = obtenerEspacioLibre(persona, t);
    if(j >= 0)
    {
        printf("Ingrese nombre de la persona: ");
        fflush(stdin);
        gets(persona[j].nombre);
        printf("Ingrese edad: ");
        scanf("%d", &persona[j].edad);
        while(persona[j].edad < 0)
        {
            printf("La edad no puede ser menor a 0. Ingrese nuevamente: ");
            scanf("%d", &persona[j].edad);
        }
        printf("Ingrese el DNI (sin puntos): ");
        scanf("%d", &persona[j].dni);
        persona[j].estado = 1;
    }
}

int compararDNI(ePersona lista[], int t, int dni)
{
    int i;
    int j = -1;
    for(i = 0; i < t; i++)
    {
        if(lista[i].dni == dni && lista[i].estado == 1)
        {
            j = i;
            break;
        }
    }
    return j;
}

void borrarPersona(ePersona lista[], int t)
{
    int i;
    int j;
    int bandera;
    int auxiliar;
    char respuesta;

    for(i = 0; i < t; i++)
    {
        if(lista[i].estado == 1)
        {
            bandera = 1;
            break;
        }
    }

    if(bandera == 1)
    {
        mostrarPersonas(lista, t);
        printf("Ingrese el DNI (sin puntos) de la persona que desea borrar: ");
        scanf("%d", &auxiliar);
        j = compararDNI(lista, t, auxiliar);
        while(j == -1)
        {
            printf("El DNI ingresado no es valido. Reingrese el DNI: ");
            scanf("%d", &auxiliar);
            j = compararDNI(lista, t, auxiliar);
        }
        printf("Desea borrarlo? (s/n): ");
        respuesta = getch();
        if(respuesta == 's')
        {
            lista[j].estado = 0;
            printf("\nLa persona '%s' fue dada de baja\n", lista[j].nombre);
        }
        else
        {
            printf("\nAccion cancelada por el usuario\n");
        }


    }
}

void ordenarPersonas(ePersona lista[], int t)
{
    int i;
    int j;

    ePersona auxiliar;

    for(i = 0; i < t - 1; i++)
    {
        for(j = i + 1; j < t; j++)
        {
            if(strcmp(lista[i].nombre, lista[j].nombre) > 0)
            {
                auxiliar = lista[i];
                lista[i] = lista[j];
                lista[j] = auxiliar;
            }
        }
    }
}

void mostrarPersonas(ePersona lista[], int t)
{
    int i;
    int bandera = 0;

    for(i = 0; i < t; i++)
    {
        if(lista[i].estado == 1)
        {
            if(bandera == 0)
            {
                bandera = 1;
                printf("NOMBRE \t\t DNI \t\t EDAD\n");
                printf("-------------------------------------\n");
            }
            printf("%s \t\t %d \t\t %d\n", lista[i].nombre, lista[i].dni, lista[i].edad);

        }
    }
}

void grafico(ePersona lista[], int t)
{
    int i;
    int j;
    int bandera = 0;
    int min = t - 1;
    int mid = t - 1;
    int max = t - 1;
    int g[t][3];

    for(i = 0; i < t; i++)
    {
        for(j = 0; j < 3; j++)
        {
            g[i][j] = 0;
        }
    }
    for(i = t - 1; i >= 0; i--)
    {
        if(lista[i].estado == 1)
        {
            if(lista[i].edad < 18)
            {
                g[min][0] = 1;
                min--;
            }
            else
            {
                if(lista[i].edad < 35)
                {
                    g[max][2] = 1;
                    max--;
                }
                else
                {
                    g[mid][1] = 1;
                    mid--;
                }
            }
        }
    }

    for(i = 0; i < t; i++)
    {
        if(g[i][0] == 1 || g[i][1] == 1 || g[i][2] == 1)
        {
            if(bandera == 0)
            {
                bandera = 1;
            }
            if(g[i][0] == 1)
            {
                printf("O");
            }
            printf("\t\t");
            if(g[i][1] == 1)
            {
                printf("O");
            }
            printf("\t\t");
            if(g[i][2] == 1)
            {
                printf("O");
            }
            printf("\n");
        }
    }
    if(bandera == 1)
    {
        printf("Menor de 18\tEntre 19 y 35\tMas de 35\n");
    }
    else
    {
        printf("No hay datos cargados");
    }
}
