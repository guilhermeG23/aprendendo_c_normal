#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
    
    int t1 = 4;
    /*
    O break faz a parada no bloco de instrução, se ele não existir
    nenhum problema vai acontecer, ele só vai executar um bloco atrás do
    outro caso a condição for verdadeira
    */
    switch(t1) {
        case 1:
            printf("1\n");
            break;
        case 2:
            printf("2\n");
            break;
        case 3:
        case 4:
        case 5:
        case 6:
            printf("3 a 6\n");
            break;
        default:
            printf("Default\n");
            //nao precisa de break
    }
    return 0;
}