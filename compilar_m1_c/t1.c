#include <stdio.h>

//Declarar que tera essa funcao
void incrementa_i();

//Variavel nao e reinicializada pq esta com o static na frente
//Ele se torna um objeto local que é diferente de um global
void manter_valor(void) {
    static int valor = 0;
    auto int valor2 = 0; //Auto é o default de uma variavel

    printf("Valor: %d\n", valor++);
    printf("Valor2: %d\n", valor2++);
}

//Usando um registrador
void registrador(void) {
    register int valor5 = 0;
    for (;valor5 <= 3;valor5++)
        printf("valor5: %d\n", valor5);
}

int i = 10; //variavel de escopo global setada
int main(void) {
    printf("%d\n", i);
    incrementa_i(); //Funcao externa e chamada
    printf("%d\n", i);

    manter_valor();
    manter_valor();
    manter_valor();
    manter_valor();
    manter_valor();
    manter_valor();
   
    registrador();
 
    return 0;
}
