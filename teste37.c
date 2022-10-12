#include <stdio.h>
#include <string.h>

int main(void) {
    char t1[1000], t2[1000], t3[3003];
    scanf("%1000s", t1);
    scanf("%1000s", t2);
    strcpy(t3, t1); //gera
    strcat(t3, " & "); //incrementa
    strcat(t3, t2); //incrementa
    printf("%s\n", t3);
    return 0;
}

