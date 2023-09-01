#include <stdio.h>

int main() {
    
    int x,y;
    char op;
    printf("digite dois numeros e a operacao\n");
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%c", &op);

switch(op){
    case '*':
    printf("%d", x*y);
    break;
    case '-':
    printf("%d", x-y);
    break;
    case '+':
    printf("%d", x+y);
    break;
    case '/':
    printf("%d", x/y);
    break;



return 0
       
}

    return 0;
}