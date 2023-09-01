#include <stdio.h>

int main(){

    int x, y;
    printf("digite o valor da sua para saber o total a pagar com o a taxa de servico\n");
    scanf("%d", &x);

    y = x + x/10;

    printf("o valor total a pagar e\n" "%d", y);

    return 0;
}