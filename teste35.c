#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

int main(void) {
    //Else if cria um novo bloco 
    //Não é uma sequencia direta, e sim, vários blocos menores com condições diferentes -> Quando entrar em um, ele da um break na decisao
    //Mais recomendado usar o switch

    int t1 = 0;
    if (t1 == 1) {
        printf("0\n");
    } else if (t1 == 0) {
        printf("0\n");
    } else if (t1 == 0) {
        printf("0\n");
    } else {
        printf("Default\n");
    }

    return 0;

}