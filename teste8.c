#include <stdio.h>

int main(void) {
    //printe de inteiro
    int t1 = 1;
    printf("%i\n", t1);
    printf("%d\n", t1);

    float t2 = 1.1;
    printf("%f\n", t2);

    double t3 = 1.1;
    printf("%f\n", t3);

    char t4 = "1";
    printf("%f\n", t4);
    
    printf("%u\n", t4);
    printf("%p\n", t4);
    printf("%e\n", t4);
    
    //string - printf("%s\n", t5);
    //%u -> modulo de um numero
    //%p -> endereço de memoria
    //%e ou %E -> Anotação cientifica

    return 0;
}