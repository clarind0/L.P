#include <stdio.h>
#include <limits.h>

void atualizaMenor(int *menor, int valor)
{
    if(valor < *menor){
        *menor = valor;
    }
}

int main()
{
    int num, menor;
    char continuar;

    menor = INT_MAX;

    do
    {
    puts("digite um número:");
    scanf("\n%d", &num);

    atualizaMenor(&menor, num);

    printf("o menor valor fornecido até agora é:\n%d", menor);

    puts("\ndeseja inserir outro número? (s/n)\n");
    scanf(" %c", &continuar);


    } while (continuar == 's' || continuar == 'S');

    printf("programa encerrado. O menor valor final fornecido foi: \n%d", menor);
    
}