#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

int main(void) {

    int t1 = 0;

    //Escopo limitado
    {
        int t2 = 1;
        printf("%d\n", t2);
        t1 = 1; //Da para editar já que a variavel esta num escopo maior
    }

    printf("%d\n", t1);
    //printf("%d\n", t2); -> Vai dar erro por estar fora do escopo       

    return 0;

}