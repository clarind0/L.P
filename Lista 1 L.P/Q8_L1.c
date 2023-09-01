#include <stdio.h>

int main(){
    int x, y;
    printf("digite um numero para saber o seu valor elevado ao quadrado\n");
    scanf("%d", &x);
     
    y = x*x;

    printf("o quadrado do numero digitado e\n" "%d", y);

    return 0;

}