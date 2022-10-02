#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

int main(void) {

    //Operador ternario
    int t1 = (true) ? 1 : 2;
    printf("%d\n", t1);

    t1 = (false) ? 1 : 2;
    printf("%d\n", t1);

    int t2 = 4;

    //concatenando varios ternarios
    int t3 = (t2 == 0) ? 0 :
            (t2 == 1) ? 1 :
            (t2 == 2) ? 2 :
            (t2 == 3) ? 3 :
            (t2 == 4) ? 4 : -1;

    printf("%d\n", t3);           

    return 0;

}