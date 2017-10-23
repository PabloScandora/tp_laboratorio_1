#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nombre[50];
    int edad;
    int estado;
    int dni;

} ePersona;


/** \brief
 *
 * \param ePersona[]
 * \param int
 * \return void
 *
 */
void inicioACero(ePersona[], int);

/** \brief
 *
 * \param ePersona[]
 * \param int
 * \return int
 *
 */
int obtenerEspacioLibre(ePersona[], int);

/** \brief
 *
 * \param ePersona[]
 * \param int
 * \return void
 *
 */
void agregarPersona(ePersona[], int);

/** \brief
 *
 * \param lista[] ePersona
 * \param t int
 * \param dni int
 * \return int
 *
 */
int compararDNI(ePersona[], int, int);

/** \brief
 *
 * \param lista[] ePersona
 * \param t int
 * \return void
 *
 */
void borrarPersona(ePersona[], int);

/** \brief
 *
 * \param lista[] ePersona
 * \param t int
 * \return void
 *
 */
void mostrarPersonas(ePersona[], int);

/** \brief
 *
 * \param ePersona[]
 * \param int
 * \return void
 *
 */
void grafico(ePersona[], int);
