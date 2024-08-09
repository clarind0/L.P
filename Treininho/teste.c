#include <stdio.h>

void adicionar(int *a, int *b, int *resultado)
{
    *resultado = *a + *b;
}


int main(){
    int num1;
    int num2;
    int soma;

    puts("digite dois números para saber a soma dos dois:");
    scanf("%d\n %d", &num1, &num2);

    adicionar(&num1, &num2, &soma);

    printf("o resultado da soma é: \n%d\n", soma);
    printf("o endereço de memoria onde o resultado da soma está armazenado é: \n%p\n", (void *)&soma);

    return 0;
}