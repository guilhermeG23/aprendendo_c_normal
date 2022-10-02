#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
    
    for(int t1=0;t1 <= 10;t1++) {
        if (t1 == 5) {
            continue; //para a execução atual 
        }
        if (t1 == 9) {
            break; //Para todo o lupa
        }
        printf("%d\n", t1);
    }

    return 0;

}