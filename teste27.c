#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define t1 0

int main(void) {

    printf("%d\n", t1);

    //valor imutavel
    const int t2 = 1;

    printf("%d\n", t2);

    //t2 = 10;

    printf("%d\n", t2);

    return 0;

}