#include "main.h"
/**
 * swap_int - change a and b
 * @a:first number
 * @b:second number
 */
void swap_int(int *a, int *b)
{
int var;
var = *b;
*b = *a;
*a = var;
}
