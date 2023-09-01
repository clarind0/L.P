#include <stdio.h>

int main(){

    int x,y;
    float j;
    printf("digite dois numeros para saber a soma, o produto, a diferenca, o quociente e o resto da divisao dos dois numeros\n");
    scanf("%d", &x);
    scanf("%d", &y);
    j = (double)x/y;

    printf("a soma e %d", x+y); 
    printf(" ,o produto e %d", x*y); 
    printf(" ,a diferenca e %d", x-y);
    printf(" ,o quociente e %f", j);
    printf(" ,o resto da divisao e %d", x%y);

    return 0;

}