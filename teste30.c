#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

int main(void) {

    double t1 = 0;

    printf("Entre com o valor longfloat: ");
    scanf("%lf", &t1);
    printf("\n");
    printf("Valor: %.2f\n", t1);

    return 0;

}