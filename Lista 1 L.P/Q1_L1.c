#include <stdio.h>

int main(){

    printf("%d\n", 7 + 3*6/2-1);
    //PRIMEIRO É FEITO AS OPERAÇÕES DE * E /, DEPOIS AS DE + E -.//
    printf("%d\n", 2%2 + 2*2-2/2);
    //PRIMEIRO É FEITO AS OPERAÇÕES DE %,/ E *, DEPOIS AS DE + E -.//
    printf("%d\n", (3*9*(3+(9*3/(3)))));
    //PRIMEIRO É FEITO AS OPERAÇÕES ENTRE (), DEPOIS AS DE * E /, POR ÚLTIMO AS DE + E -.// 

    return 0;
}