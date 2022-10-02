#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
    
    int t1 = 0;
    while(t1 <= 10) {
        printf("%d\n", t1);
        //t1++; //valido
        //t1 = t1 + 1; //valido
        t1 += 1; //valido 
    }
    
    while(t1 >= 0) {
        printf("%d\n", t1);
        //t1--; //valido
        //t1 = t1 - 1; //valido
        t1 -= 1; //valido 
    }
    
    return 0;
}