//Biblioteca do sistema 
#include <stdio.h>
//Usar uma lib que usa bool
#include <stdbool.h>
//Lib de limits
#include <limits.h>
//Lib de inteiros
#include <stdint.h>
//Usar a lib para o malloc
#include <stdlib.h>
//Usando o memset
#include <string.h>

//Biblioteca local -> Definido o caminho
# include "stdio.h"

//Valor definido e inalteravel prevemente
#define TESTE 10

//Definir uma macro
#define TESTE100() {\
	printf("Chamado teste 100\n");\
}


//Enum -> gera um lista com posicionamento, isso é, cada variavel tem um valor de posicao quando requisitado
//Se um valor nao e definido nas casas, ele comeca de 0 e vai para frente
enum casas { T1, T2, T3, T4 };
enum casas1 {T11=10, T12, T13, T14};

//Esse cara vai conferir se e possivel alocar memoria, se nao, ele ja mata a operacao para evitar problemas
void *malloc_s(size_t size) {
    void *retorno;
    retorno = malloc(size);
    if (retorno == NULL) {
        fprintf(stderr, "memoria insuficiente\n");
	exit(1);
    }
    return retorno;
}

//int -> Tipo de retorno de um bloco de instrução
//main(void) -> Função principal do C
//main(void) -> O void é para não haver parametros na função
int main(void) {
    int teste1 = 10; //Definindo uma variavel
    printf("Valor definido: %d\n", TESTE);
    printf("Valor teste: %d\n", teste1);

    //printf é uma função de retorno de valor int, se ela der certo, ele retorna a quantidade de caracteres da linha, Ex:
    int teste2 = printf("teste");
    printf("Valor do teste2: %d printf\n", teste2);

    //retorno convertido dos valores
    //10 - inteiro
    //0xa - valor em hexa
    //'A' - Valor ascii com aspas simples
    //Saida em %d = decimal
    printf("Valores inteiros: %d - %d - %d\n", 10, 0xa, 'A');
    //Saida em %x = hexadecimal
    printf("Valores inteiros: %d - %d - %d\n", 10, 0xa, 'A');

    char teste3 = 'c';
    printf("Valor caractere: %c\n", teste3);

    //Pulando uma linha com \n usando o valor dele em ascii
    printf("\n\n------------------------------------\n");
    printf("Teste ------------");
    printf("%c", 10);
    printf("Teste ------------");
    printf("\n------------------------------------\n");

    //Mostrar o quanto cabe em uma v
    //Incorreto
    //printf("Tamanho da variavel char: %d\n", sizeof teste3);
    //Correto
    printf("Tamanho da variavel char: %lu\n", sizeof teste3);

    //Em vez de fazer o de cima, voce pode declarar de forma mais limpa pelo comando abaixo para saber o tamanho de um tipo
    printf("Tamanho da variavel char: %lu bytes %zu bites\n", sizeof (char), sizeof (char) * 8);

    //Quando o char e setado sem nada, ele tem o signed implicito nele
    signed char teste4;
    //teste4 = 256; -> Maior que o valor possivel de (2^8)-1 = 255 que é a maior valor possível a ser armazenado em 8 bites
    teste4 = 255;
    //Ele vai sair -1 por motivos que o primeiro bite é do sinal, isso é 01111111 -> Sinal + valor
    //Entao ele é limitado a sinal + valor maximo de 2^7
    printf("Teste4: %i\n", teste4);
    teste4=127; 
    printf("Teste4: %i\n", teste4); 
    teste4=128; 
    printf("Teste4: %i\n", teste4); 


    //Remover o sinal para converter os valores para somente um lado
    unsigned char teste5;
    teste5 = 255;
    printf("Teste5: %i\n", teste5);

    //Bool nao e default do c
    bool teste6 = true;
    printf("Teste: %b\n", teste6);

    //Usando a lib de limits para apresentar um valor inteiro decimal
    signed int teste7 = INT_MAX; //Esse valor vem da lib limits.h
    unsigned int teste8 = UINT_MAX; //Esse valor vem da lib limits.h
    printf("Valor teste7 maximo inteiro: %d\n", teste7);
    printf("Valor teste8 maximo inteiro: %u\n", teste8);


    //Usando a lib do stdin
    short int teste9 = 10;
    short  teste10 = 10;
    long int teste11 = 10;
    long teste12 = 10;
    printf("Usando um short int: %d --- Tamanho: %zu --- bites: %zu\n", teste9, sizeof teste9, sizeof teste9*8); 
    printf("Usando um short int: %d --- Tamanho: %zu --- bites: %zu\n", teste10, sizeof teste10, sizeof teste10*8); 
    printf("Usando um long int: %d --- Tamanho: %zu --- bites: %zu\n", teste11, sizeof teste11, sizeof teste11*8); 
    printf("Usando um long int: %d --- Tamanho: %zu --- bites: %zu\n", teste12, sizeof teste12, sizeof teste12*8); 

    //Register -> Uso de registradores no processador como forma de otimizacao
    register int teste13 = 0;
    printf("Teste13: %d\n",teste13);

    //Uso de float
    float teste14 = 1.1;
    printf("Valor float t14: %.2f\n", teste14);
    float teste15 = 3e2; //3 na casa decimal com 2 no expoente // 3 * (10^2)
    printf("Valor float t15: %.2f\n", teste15);
    printf("Usando um long int: %d --- Tamanho: %zu --- bites: %zu\n", teste15, sizeof teste15, sizeof teste15*8); 

    //Uso de doublw 
    double teste16 = 12; 
    printf("Usando um double: %f --- Tamanho: %zu --- bites: %zu\n", teste16, sizeof teste16, sizeof teste16*8); 
    long double teste17 = 12; 
    printf("Usando um double: %f --- Tamanho: %zu --- bites: %zu\n", teste17, sizeof teste17, sizeof teste17*8); 
    
    //Uso de char
    //Valores sempre serao iguais pois o char só tem 1 byte
    //Arrays tem as variaveis em sequencia na memoria
    //E possível acessar um endereco nao listado no arrauy, porém o valor não é mostrado por nao ter valores
    char teste18[4];
    teste18[0] = 0x42;
    teste18[1] = 0x43;
    teste18[2] = 0x44;
    teste18[3] = 0x45;

    printf("Tamanho do char: %zu\n", sizeof teste18);
    printf("Quantidade de elementos no array: %zu\n", sizeof teste18 / sizeof teste18[0]);
    printf("Char[0]:%c, char[1]:%c, char[2]:%c e char[3]:%c\n", teste18[0], teste18[1], teste18[2], teste18[3]);
    printf("Endereco do array:%p\nEndereco de memoria do array: %p\nEndereco do primeiro elemento do array: %p\n", teste18, &teste18, &teste18[0]);


    //Aritimetica
    int teste19 = 0;
    teste19 = +10 + -1;
    printf("Valor: %d\n", teste19);
    teste19 = 10 - 1;
    printf("Valor: %d\n", teste19);
    teste19+=1;
    printf("Valor: %d\n", teste19);
    teste19++;
    printf("Valor: %d\n", teste19);
    teste19*=2;
    printf("Valor: %d\n", teste19);
    teste19/=2;
    printf("Valor: %d\n", teste19);
    teste19%=2;
    printf("Valor: %d\n", teste19);
    
    //O mesmo vale para + e - 
    //Pos-incremento
    printf("Valor: %d\n", teste19++);
    //Pre-incremento
    printf("Valor: %d\n", ++teste19);


    /*Variaveis de multiplas linhas
     * + = Soma
     * - = Subtracao
     * * = multiplicacao
     * / = Divisao
     * % = resto
     * */


    //logica
    //Usado muito em operacoes de decisao
    //&& = E = Todas as condicoes tem que iguais
    //|| = OU = Qualquer condicao tem que ser positiva
    //!= = Negacao, inverte o estado atual, true para false, false para true
    printf("1 == 1: %d\n", 1 == 1);
    printf("2 == 1: %d\n", 2 == 1);
    printf("1 == 1 && 2 == 2: %d\n", 1 == 1 && 2 == 2);
    printf("1 == 2 || 2 == 2: %d\n", 1 == 2 || 2 == 2);
    printf("!(1 == 1): %d\n", !(1 == 1));
    printf("!(2 == 1): %d\n", !(2 == 1));

    //Decisao entre variaveis
    //No logico, tudo igual a 0 é falso e tudo igual maior que 1 é verdadeiro
    //Aqui e comparacao dos valores binarios
    int teste20 = 1;
    int teste21 = 1;
    int teste22 = 0b1011;
    printf("Saida: %d\n", teste20 & teste21); //E -> Igualdade
    printf("Saida: %d\n", teste20 | teste21); //Bit a Bit
    printf("Saida: %d\n", teste20 ^ teste21); //Ou exclusivo -> XOR
    printf("Saida: %d\n", ~teste20); //Negar todos os bits -> Inverte todos os estados de bit ativados da variavel
    printf("usando o 0b para montar o valor a ser chamado: %d\n", teste22);

    //Empurar os bits >> e <<
    //Essa operacao e mais rapida que * e / -> Passivel de ter melhor performance
    printf("Empurar um bit para a esquerda: %d\n", teste22 << 1);
    printf("Empurar um bit para a direita: %d\n", teste22 >> 1);


    //Estrutruras de decisao e blocos

    //sub bloco -> Limitado ao escopo deste bloco, pode usar variaveis e libs do pai, mais ao contrario nao
    {
	int teste23_t1 = 100;
    	printf("teste interno: %d\n", teste23_t1);
    }

    if (1)
        printf("If de unica linha\n");
    else
	puts("teste\n");

    if (0) {
    	printf("Valor e falso\n");
    } else if (teste22 == 10000) {
    	printf("Valor de 10000\n");
    } else {
    	printf("tudo que é diferente de 0 e verdadeiro\n");
    }



    //Estruturas de repeticoes
    unsigned int contador = 0; //recomendado colocar para somente usar o lado positivo como seguranca
    printf("Valor do contador: %d\n", contador);
   

    //Estrutura imprimir
    imprimir:
    	printf("Valor contador - imprimir: %d\n", contador);
	contador++;
	if (contador < 5)
		goto imprimir;
    

    //Formas de fazer um loop
    for(contador=0;contador<=5;contador++) {
    	printf("Valor contador - imprimir: %d\n", contador);
    }

    for(int contador1=0;contador1<=5;contador1++) {
    	printf("Valor contador - imprimir: %d\n", contador1);
    }

    contador=0;
    for(;contador<=5;contador++) {
    	printf("Valor contador - imprimir: %d\n", contador);
    }

    contador=0;
    for(;contador<=5;contador++)
    	printf("Valor contador - imprimir: %d\n", contador);

    contador=0;
    for(;contador<=5;) {
    	printf("Valor contador - imprimir - teste: %d\n", contador);
	contador++;
    }

    contador=0;
    for(;contador<=5;contador++) {
    	printf("Valor contador - imprimir - teste: %d\n", contador);
    	if (contador == 3) {
	    break; //Parar a execucao do loop
	}
    }

    //Usando um interador somente no escopo do for
    //Este é baseado num padrao moderno de c
    for(unsigned int contador2=0;contador2<5;contador2++)
	    printf("valor teste - contador2: %d\n", contador2);


    //Uso do while -> Laco de repeticao
    contador=0;
    while(contador <= 10) {
	printf("valor teste - contador: %d\n", contador);
        contador++; 
    }

    //Usando um true da lib bool para fazer uma execucao infinita
    contador=0;
    while(true) { //Pode trocar o true para 1 se nao tiver a stdbool
	printf("Valor: %d\n", contador);
	contador++;
        if (contador == 3) {
	    break;
	}
    }

    //Pelo menos a primeira instrucao é executada, diferente do while normal que tem que ter a condicao para dar certo
    do {
	printf("Valor: %d\n", contador);
	contador++;
    } while(contador <= 10);

    //continue para a operacao atual e volta a condicao inicial do 'pai'
    contador=0;
    while(contador <= 10) {
	contador++;
        if ((contador % 2) == 0) {
            printf("Valor: %d\n", contador);
	} else {
	    continue;
	} 
    }



    //Ponteiros
    int teste25[] = {1,2,3,4,5};
    for (contador=0;contador<=4;contador++)
        printf("Valor array: %d\n", teste25[contador]);
   
    //Usando um ponteiro para acessar a posicao do valor em memoria do array 
    for (contador=0;contador<=4;contador++)
        printf("Valor array: %d\n", *teste25 + contador);

    //Pegar o endereco em memoria da variavel
    //vale comentar que ele muda em cada execucao já que dinamico
    printf("Valor em memoria do contador: %p\n", &contador);


    int teste26 = 1000;
    int *ponteiro1;
    ponteiro1 = &teste26;

    //usar o * recupera o valor do endereco de memoria
    printf("------------------------------\n");
    printf("Valor de teste26: %d\n", teste26);
    printf("Valor de memoria de teste26: %p\n", &teste26);
    printf("Valor de teste26: %p\n", ponteiro1);
    printf("Valor de teste26: %d\n", *ponteiro1);

    //Enderecos de char
    printf("------------------------------\n");
    char pastel1[] = "teste";
    char *pastel2 = "teste";
    char pastel3[] = {0x74,0x65,0x73,0x74,0x65}; 
   
    puts(pastel1); 
    puts(pastel2); 
    puts(pastel3); 

    imprime2("imprime esse char inteiro - teste");
    printf("\n");


    //Ponteiro de memoria
    //O tamanho do enderecamento do ponteiro depende da arquitetura que ele esta sendo executado
    
    int teste30 = 10;
    int *teste31;
    int *teste32 = NULL; //Inicia o endereco a um valor nulo
    printf("------------------------\n");
    printf("Valor: %d, endereco de memoria: %p, tamanho de bytes para o endereco: %zu\n", teste30, &teste30, sizeof teste30);
    printf("Valor: %d, endereco de memoria: %p, tamanho de bytes para o endereco: %zu\n", teste31, &teste31, sizeof teste31);
    teste31 = &teste30;
    printf("Valor: %d, endereco de memoria: %p, tamanho de bytes para o endereco: %zu\n", teste31, &teste31, sizeof teste31);
    printf("Valor: %d, endereco de memoria: %p, tamanho de bytes para o endereco: %zu\n", *teste31, &teste31, sizeof teste31);
    printf("------------------------\n");


    printf("\n\n");
    printf("------------------------\n");
    //Para usar um ponteiro, o mesmo tem que ter uma instancia inicial da variavel
    //Ex:
    int *teste40 = NULL; //Isso já gera o alocamento
    teste40 = malloc(sizeof (int)); // Aloca uma quantidade de memoria para a variavel
    *teste40 = 1;
    printf("Teste: %d\n", *teste40);
    printf("Teste: %p\n", teste40);
    free(teste40); //Limpa os valores de ponteiro na memoria
    //Isso e bom para usos dinamicos
    printf("------------------------\n");




    printf("\n\n");
    printf("------------------------\n");
    char teste50[20] = "pastel";
    for(int counter = 0;counter <= 20; counter++)
	    printf("%x ", teste50[counter]); //Imprime o hexa do valor do array
    printf("\n");

    //Formas de chamar um valor
    //1 é a posicao dentro do array que quero mostrar
    printf("%x\n", teste50[1]);
    printf("%x\n", *(teste50+1));
    printf("%x\n", 1[teste50]);
    printf("%x\n", *(1+teste50));
    printf("------------------------\n");


    printf("\n\n");
    printf("------------------------\n");
    int i, j;
    int tamanho[8][8] = {0};
    tamanho[0][5]=T1;
    tamanho[1][3]=T2;
    tamanho[4][7]=T3;
    *(*(tamanho+0)+0)=T4;
    *(*(tamanho+1)+1)=T4;
    for(i=0;i<8;i++) {
    	for(j=0;j<8;j++) {
	    printf("[%d][%d]={%d} ", i, j, tamanho[i][j]);
	    if (j == 7) {
	    	printf("\n");
	    }
    	}
    }
    printf("------------------------\n");

    printf("\n\n");
    printf("------------------------\n");
    tamanho[0][5]=T11;
    tamanho[1][3]=T12;
    tamanho[4][7]=T13;
    *(*(tamanho+0)+0)=T14;
    *(*(tamanho+1)+1)=T14;
    for(i=0;i<8;i++) {
    	for(j=0;j<8;j++) {
	    printf("[%d][%d]={%d} ", i, j, tamanho[i][j]);
	    if (j == 7) {
	    	printf("\n");
	    }
    	}
    }
    printf("------------------------\n");


    printf("\n\n");


    //memoria dinamicamente alocada
    //A funcao de malloc_s esta no topo do arquivo
    int *teste60;
    teste60 = malloc(4); //Quantidade de memoria para um inteiro
    teste60 = malloc(sizeof(int)); //Essa e uma das formas dinamicas de alocar
    teste60 = malloc_s(sizeof(int)); //Usando uma funcao externa para alocar uma quantidade de memoria
    printf("------------------------\n");
    if (teste60 == NULL) { //Se o valor nao for iniciado, so significa que ele so esta ocupando memoria desnecessariamente
        printf("Valor esta NULL\n");	
   	return 0;
    }
    printf("------------------------\n");


    //Usando um macro, que e uma estrutura ja preparada para ser alocada dentro da aplicacao, diferente das demais funcoes que e a chamada de uma funcao e esperar seu retorno, o macro e uma funcao dentro da execucao, incurtando o tempo de processamento
    //O problema dele é que ele vai tornar o arquivo maior, ja que o macro nao é feito que nem um funcao que so precisa ficar instanciada, o macro é copiando para dentro do code sempre que requisitado
    TESTE100();

    //A alocacao de memoria dinamica é uma forma de automatizar a quantidade de memoria necessaria    
    //Vale comentar que alocar na mao uma memoria, tem o risco de alocar um setor já setado que pode causar risco ao sistema
    int *pastel100;
    pastel100 = malloc(sizeof(int));
    pastel100 = realloc(pastel100, sizeof(int)+sizeof(int)); //Realoca a quantidade de memoria para se usar num ponteiro
    *(pastel100+1) = 101; 
    *(pastel100+2) = 102; 
    *(pastel100+3) = 103; 
    *(pastel100+4) = 104; 

    for(int iii=0;iii<10;iii++)
        printf("%d\n", *(pastel100+iii));

    free(pastel100); //Liberar a memoria alocada
    //Se uma memoria nao for desacolada, isso se torna um memory like -> Vazamento de memoria
    //Nao pode tambem liberar um trecho de memoria mais que uma vez, já que o mesmo já foi eliminado, isso deixa o free perdido ja que variavel ainda está instanciada
   

    //memset já instancia e inicializa o ponteiro 
    
    /* -> Este eu nao consegui testar bem

    int *pastel101;
    memset(pastel101, 1, sizeof(int));
    *(pastel101+0)=1;
    *(pastel101+1)=1;
    *(pastel101+2)=1;
    *(pastel101+3)=1;
    *(pastel101+4)=1;
    *(pastel101+5)=1;
    for(i=0;i<5;i++)
        printf("%d\n", *(pastel101+i));
    */

    return 0; //Esse retorno e devolvido para o S.O que requisitou o main
}


int imprime2(char *s) {
    while (*s)
        putchar(*s++);
}

//root@teste:~ # echo $?
//0
//root@teste:~ # gcc teste.c -o teste
//root@teste:~ # ./teste
//Valor definido: 10
//root@teste:~ # echo $?
//1
