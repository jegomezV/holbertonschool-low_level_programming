#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{

	if (argv[1][1] != '0' && atoi(argv[1]) == 0){
		printf("error por argumento 1 no valido\n");
		exit(98);
	}
    printf("es correcto"); 

    return (0);
}