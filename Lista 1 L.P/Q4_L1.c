#include <stdio.h>

int main(){
    int x;
    printf("digite um numero 'para saber seu triplo, seu quadrado e seu meio\n");
    scanf("%d", &x);
    printf("o triplo e %d", x*3);
    printf(" ,o quadrado e %d", x*x);
    printf(" e seu meio e %d", x/2);

    return 0;
}