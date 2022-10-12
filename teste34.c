#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

int main(void) {

    char t1[1000];
    FILE *hand;
    hand = fopen("/root/teste.txt", "r");
    while(fgets(t1, 1000, hand) != NULL) {
        printf("%s\n", t1);
    }
    return 0;

}