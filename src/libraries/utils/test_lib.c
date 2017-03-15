#include <stdio.h>
#include "utils.h"

int main(int argc, char *argv[])
{
char buf[256];

	printf("Introduce tu nombre:\n");
	fgets(buf, sizeof(buf),stdin);
	printf("Tu nombre en mayusculas es <%s>\n",toupper_str(buf));
}
