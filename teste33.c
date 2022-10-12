#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

int main(void) {

    //Formas de receber uma matriz de caracteres
    char t1[10];
    scanf("%10s", t1);
    printf("%s\n", t1);

    char t2[1000];
    scanf("%[^\n]1000s", t2);
    printf("%s\n", t2);

    //Usando a lib do stdio para fazer esta captura
    char t3[1000];
    fgets(t3, 1000, stdin);
    printf("%s\n", t3);

    return 0;

}