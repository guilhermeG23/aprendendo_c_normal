#include <stdio.h>
#include <stdlib.h>

int main(void) {
    
    double t1 = 10 % 3;
    if (t1 == 1) {
        printf("%f\n", t1);
    } else {
        printf("Não é 1\n");    
    }

    t1 = 10 % 4;
    if (t1 == 1) {
        printf("%f\n", t1);
    } else {
        printf("Não é 1\n");    
    }

    return 0;
}