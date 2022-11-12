#include "3-calc.h"

int op_add(int a, int b)
{
	printf("El resultado de la suma es: %d.\n", a + b);
}

int op_sub(int a, int b)
{
	printf("El resultado de la resta es: %d.\n", a - b);
}

int op_mul(int a, int b)
{
	printf("El resultado de la multiplicacion es: %d.\n", a * b);
}

int op_div(int a, int b)
{
	printf("El resultado de la division es: %d.\n", a / b);
}

int op_mod(int a, int b)
{
	printf("El resultado de la operacion es: %d.\n", a % b);
}

void operaciones()
{
	op_t array[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};
}

int main(int argc, char *argv[])
{
	if (argc != 4){
		printf("Error\n");
		exit(98);
	}

	if (argv[1][0] != '0' && atoi(argv[1]) == 0){
		printf("error por argumento 1 no valido\n");
		exit(98);
	}



	if (argv[3][0] != '0' && atoi(argv[3]) == 0){
		printf("error por argumento 3 no valido\n");
		exit(98);
	}
	return (0);
}