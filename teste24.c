#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
    
    int t1 = 4;
    for (int t1 = 0;t1 <= 10; t1++) {
        printf("%i\n", t1);
    }

    int t2 = 0;
    for(;t2 <= 10; t2++) {
        printf("%i\n", t2);    
    }

    for(int t3=0, t4=10; t3 <= 10; t3++,t4--) {
        printf("%i\n", t4);
    }
    return 0;

}