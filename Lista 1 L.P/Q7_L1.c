#include <stdio.h>

int main(){

    int x, y, z;
    printf("digite a quantidade de horas, de minutos e de segundos nesta ordem para descobrir o total de segundos\n");
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

    printf("%d", x*3600+y*60+z);


    return 0;
}