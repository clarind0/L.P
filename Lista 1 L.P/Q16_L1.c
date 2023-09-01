#include <stdio.h>

int main(){
    float x, y, z, sb, sl;

    printf("digite o valor da sua hora aula ,o numero de horas trabalhadas e o percentual de desconto do INSS(sem o sinal):\n");
    scanf("%f", &x);
    scanf("%f", &y);
    scanf("%f", &z);
    
    sb = x*y;
    sl = sb-sb*z/100;

    printf("o salario bruto e %f", sb);
    printf(" ,o salario liquido e %.2f", sl);

    return 0;
}