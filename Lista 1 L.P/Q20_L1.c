#include <stdio.h>

int main(){
    int x;
    printf("digite um numero para saber se ele e par ou impar:\n");
    scanf("%d", &x);

    printf("o numero %d e %s", x, (x % 2 == 0 ? "par" : "impar"));



    return 0;
}