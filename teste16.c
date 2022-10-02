#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
    
    /*
    signed -> Pode receber valores positivos e negativos
    unsigned -> Pode só receber valores positivos -> Dobra a capacidade
    long -> Aumenta a capacidade de armazenamento da variavel inteira
    short -> Diminui a capacidade da variavel inteira
    */

    int t1 = 10;
    unsigned short int t2 = 10;
    printf("%i\n", sizeof(t1));
    printf("%i\n", sizeof(t2));
    
    return 0;
}