#include <stdio.h>
#include <math.h>

int main(){
    float r;

    printf("digite o raio de um circulo para saber seu diametro, o valor de sua circunferencia e sua area:\n");
    scanf("%f", &r);
    
    printf("o valor do diametro e %f", 2*r);
    printf(" ,o valor de sua circunferencia e %f", 2*3.14159*r);
    printf(" e a area e %.2f", 3.14159*r*r);
    
    return 0;
}