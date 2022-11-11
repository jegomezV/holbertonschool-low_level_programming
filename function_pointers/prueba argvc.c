#include <stdio.h>
void func (char array[]){
    printf("la cadena es %s\n", array);
}
void cadenac (char arraybi [] [7]){
    printf("imprime cadena %c\n", arraybi[0][1]);
}

int main (int argc, char *argv[])
{
char array[] = "penelope";

char arraybi [] [7] = {"hola1", "hola2", "hola3"};

func(array);
cadenac(arraybi);

}