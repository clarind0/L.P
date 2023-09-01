#include <stdio.h>

int main(){
    int x,y,z;
    printf("digite o tempo em segundos para saber quantas horas, minutos e segundos ha:\n ");
    scanf("%d", &x);  
    printf("esse tempo tem %d horas", x/3600);
    y = x%3600;
    printf(" ,%d minutos", y/60);
    z = y%60;
    printf(" e %d segundos", z);

    return 0;
}