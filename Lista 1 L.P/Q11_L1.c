#include <stdio.h>

int main(){
    float x,y,z;
    printf("digite a cotacao do dolar:\n");
    scanf("%f", &x);
    printf("digite a quantidade em reais que deseja converter:\n");
    scanf("%f", &y);

    z = y/x;

    printf("a quantidade de %f reais vale %f dolares", y, z);

    return 0;
}