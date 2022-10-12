#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct st {
    //5 bytes de char
    unsigned char t1;
    unsigned char t3;
    unsigned char t4;
    unsigned char t5;
    unsigned char t6;
    //4 bytes de inteiro
    unsigned int t2;
    //Vai retornar 12 pq sempre tem que ser par uma estrutura
};

//Todos os bytes sao compartilhados entre os valores da estrutura
union st1 {
    unsigned char t10;
    unsigned int t11;
};

int somar(int t11, int t12) {
    int t13 = t11 + t12;
    return t13;
}

void error_padrao(char *msg) {
    fprintf(stderr, "Erro:%s\n", msg); //Isso faz com que o erro tenha uma saida diferete que a do terminal e pode ser direcionada para arquivos
    exit(1);
}

void fechar(void) {
    exit(0);
}

int main() {

    struct st s;
    s.t1 = 0;
    s.t2 = 0;

    //Se preencher com 1, todos os bytes das variaveis iram para 1, retornando o valor maximo que um byte pode armazenar
    memset(&s, 1, sizeof(struct st));

    printf("t1: %d --- t2: %d\n", s.t1, s.t2);
    printf("%zu\n", sizeof(struct st));
    
    
    //Unions dividem seus espacos de armazenamento com suas variaveis, sendo que a alteração de uma pode afetar as demais 
    union st1 s1;
    s1.t11 = 1000; 
    s1.t10 = 1; 
    printf("t10: %d --- t11: %d\n", s1.t10, s1.t11);
    printf("%zu\n", sizeof(union st1));


    //usando uma funcao para fechar a execucao
    //fechar();


    //entrada de um valor
    int entrada;
    printf("Entre com um valor: ");
    scanf("%d", &entrada);
    printf("Valor digitado: %d\n", entrada);


    //Chamar uma funcao
    printf("Soma: %d\n", somar(10,10));


    //Chamando o endereco de uma funcao
    printf("Referencia de memoria do soma: %p\n", somar);

    return 0;
}
