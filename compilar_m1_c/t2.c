//Fala que vai usar a variavel externa como parametro
extern int i;
//Seta a funcao de operacao
void incrementa_i(void) {
    i++;
}

//Torna a funcao somente vizivel neste modulo, impossivel de usar em outro arquivo
//Toda a funcao por padrao é um extern implicito
static void pastel(void) {
}
