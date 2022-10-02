#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

int main(void) {

    if (true)
        printf("Instrucao de linha unica\n");

    for(int t1 = 0; t1 <= 3; t1++)
        printf("Intrucao de uma linha: %d\n", t1);

    if (false)
        printf("If é true\n");
    else {
        printf("If é false\n");
        printf("Está estrutura é valida\n");
    }


    return 0;

}