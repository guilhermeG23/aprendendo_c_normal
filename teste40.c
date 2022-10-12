#include <stdio.h>

#define TESTE 10
#ifndef TESTE
#define TESTE 1

int main() {
    printf("Valor definido: %d", TESTE);
    return 0;
}