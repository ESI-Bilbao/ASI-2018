
#include <stdio.h>
#include <stdlib.h>

#include "client.h"		// Include propio en directorio actual

#define MIN_PARAMS 2		// EL nombre de programa es un parametro
#define MAX_PARAMS 2		// Incluido el nombre de programa

/********************* PROGRAMA DE LA PRACTICA X **************************/
/* Historia:

28/02/2017	AFV	Inicio codificación

*/

/*------------------------- Mensaje de información -----------------------*/

void print_usage(char *command)
{
	printf("El formato del comando es:\n");
	printf("%s <id proceso MONITOR>\n",command);
}

/*------------------------------------------------------------------------*/

/*--------------------- Imprimir parametros ------------------------------*/

void print_parameters(int argc, char *argv[])
{
int i;
	for(i=0;i<argc;i++)
		printf("PAR %d: <%s>\n",i,argv[i]);
}

/*------------------------------------------------------------------------*/

/*---------------------- Función principal -------------------------------*/
/* Comentario:
Conviene que esta función sea fácil de leer y de una idea de la forma de funcionar la lógica del programa. Apóyate en funciones auxiliares para conseguir este objetivo.
*/

int main(int argc, char *argv[])
{
	if(argc < MIN_PARAMS || argc > MAX_PARAMS) {
		fprintf(stderr,"Mal formato de comando.\n");
		print_usage(argv[0]);
		exit(1);
	}
	print_parameters(argc,argv);
	exit(0);
}

/*------------------------------------------------------------------------*/

/**************************************************************************/

