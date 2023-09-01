#include <stdio.h>

int main(){
    float x;
    char s;
    
    printf("digite sua altura em metros para saber seu peso ideal:\n");
    scanf("%f", &x);
    printf("digite se voce e homem ou mulher(H ou M):\n ");
    scanf("%c", &s);
    
    printf("seu peso ideal e %f", (s == 'H' ? 72.7*x-58 : 62.1*x-44.7));

    return 0;
}