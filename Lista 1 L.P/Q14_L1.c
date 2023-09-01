#include <stdio.h>

int main(){
    float x,f;
    printf("digite a temperatura em celsius para converter para fahrenheit:\n");
    scanf("%f", &x);

    f = (9*x+160)/5;

    printf("a temperatura em fahrenheit e %f", f);

    return 0;
}