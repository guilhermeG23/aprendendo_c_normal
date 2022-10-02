#include <stdio.h>
#include <stdlib.h>

int main(void) {
    
    int t1, t2;
    t1 = 10;
    t2 = 10;
    
    int t3 = t1 + t2;
    printf("%i\n", t3);
    int t4 = t1 - t2;
    printf("%i\n", t4);
    int t5 = t1 * t2;
    printf("%i\n", t5);
    double t6 = t1 / t2;
    printf("%f\n", t6);
    
    return 0;
}