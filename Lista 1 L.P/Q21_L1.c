#include <stdio.h>

int main(){
    int x, y;
    printf("digite dois numeros para saber se o primeiro e multiplo do segundo:\n");
    scanf("%d", &x);
    scanf("%d", &y);

    printf("o numero %d e multiplo de %d: %s", y, x, (y % x == 0 ? "sim" : "nao"));



    return 0;
}