//Predefinicoes

//Os includes são copias dos arquivos listandos para dentro do compilado do arquivo
#include "valor.h" //Biblioteca local ou nao listada dentro do file-store do C
#include <stdio.h> //Essa e uma lib listada dentro do sistema

#define T1 "MSG Default" //Esse é um valor fixo definido antes das funcoes, recomando para otimizacao de reuso de textos e demais, pois ele e resolvido em tempo de compilacao, em vez de execucao, conseguentemente, melhorando a performance

#define T2(x) (x*x) //Usando o pre-compilador para resolver os problemas matematicos em tempo de compilacao
//#define T3(a,s,d) (MAX(MAX(a,s), MAX(s,d)))
#define T4 \
	"Olha do T4"

int main(void) {

    printf("%s\n", T1);
    printf("%d\n", T2(10));
    //printf("%d\n", T3(10,14,11));
    printf("%s\n", T4);

    //Macro pre definido, mostra o numero da linha de chamada
    printf("Linhai: %d\n", __LINE__);

    ola();
    return 0;
}
