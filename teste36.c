#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

int main(void) {
    int blocot1();
    int t1 = blocot1(1);

    printf("Entrada: %d\n", t1);
    return 0;
}

int blocot1(int entrada) {
    int saida = entrada + 1;
    return saida;
}
