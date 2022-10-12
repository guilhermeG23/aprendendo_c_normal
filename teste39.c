#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

    char t1[1000], t3[1000], *t2;
    scanf("%1000s", t1);
    scanf("%1000s", t3);
    int tamanho = strlen(t1) + strlen(t3) + 10; //Ajustar a quantidade de casas
    t2 = (char *) calloc(tamanho, sizeof(char)); //Ajusta o tamanho do char para a quantidade recebida
    strcpy(t2, t1); //concatena os valores
    strcat(t2, t3); //concatena os valores
    printf("%s\n", t2);
    printf("%d\n", sizeof(t2));
    printf("%d\n", strlen(t2));
    free(t2);
    return 0;
}

