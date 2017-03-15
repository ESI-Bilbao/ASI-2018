
#include "utils.h"

/************************* MODULO DE FUNCIONES DE INTERES *****************/

/*---------------------- Pasar a mayusculas una cadena -------------------*/

char *toupper_str(char *mn)
{
register int i;
	for(i=0;mn[i];i++)
		mn[i] = toupper(mn[i]);
	return(mn);
}

/*------------------------------------------------------------------------*/

/**************************************************************************/

