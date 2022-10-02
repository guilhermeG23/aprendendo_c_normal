#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
    
    char t1;
    t1 = getchar(); //veio da lib do ctype -> funcao para pegar um unico caracter e armazenar na variavel
    printf("%c\n", t1);
    
    return 0;
}