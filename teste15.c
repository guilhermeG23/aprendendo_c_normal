#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
    
    printf("Retorno: %i\n", 1==1);
    printf("Retorno: %i\n", 1!=1);
    printf("Retorno: %i\n", !(1==1));
    printf("Retorno: %i\n", !(1==2));

    return 0;
}