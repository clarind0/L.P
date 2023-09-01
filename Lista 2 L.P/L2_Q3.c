#include <stdio.h>

int main(){
    int x;
    int f = 1;
    printf("digite um numero para saber seu fatorial:\n");
    scanf("%d", &x);

    for (; x>=1; x--){
        f *= x;

    }

    printf("o fatorial ddo numero fornecido e %d", f);    

    return 0;
}