#include <stdio.h>

void trocar(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;

}

int main()
{
    int x, y;

    puts("digite dois números para o valor dos dois entre si:");
    scanf("%d\n%d", &x, &y);

    printf("antes da troca: \nx:%d e y:%d", x,y);

    trocar(&x,&y);

    printf("\ndepois da troca: \nx:%d e y:%d", x,y);


    return 0;
}