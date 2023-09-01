#include <stdio.h>

int main(){
    int x;
    printf("digite um numero para saber seu antecessor e seu sucessor;\n");
    scanf("%d", &x);
    printf("o antecessor e %d", x-1);
    printf(" e o sucessor e %d", x+1);
    return 0;
}