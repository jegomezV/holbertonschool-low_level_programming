#include "function_pointers.h"

int ch;
void sum (int a,int b){

int respuesta;
int *ptrrespuesta = &respuesta;

respuesta = a + b;

if (ch == 0)
    printf("la suma de %d y %d es: %d.\n", a, b, respuesta);

}
int main(void)
{
    int estado, z = 0, x = 3;
    int *ptr = &estado;

    printf("Hey! bienvenido a Calc.\n¿Como estás el dia de hoy?\n 0 = Bien! :) | 1 = Mas o menos :/ | 2 = Mal :c | 3 = Que te importa\n");
    scanf("%d", &ch);

    if (ch != 0, 1, 2, 3)
        printf("El valor digitado no es valido\n");
    
    else 
        printf("El resultado es:  %d\n", );


}