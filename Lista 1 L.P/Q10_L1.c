#include <stdio.h>

int main(){

    int x,y,z;
    printf("digite o comprimento, a largura e a altura da caixa para saber seu volume\n");
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

    printf("o volume da caixa e\n" "%d", x*y*z);

    return 0;
}