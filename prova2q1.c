#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n;

    // Solicita o tamanho dos vetores
    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &n);

    // Aloca memória para os vetores x e y
    float *x = (float *)malloc(n * sizeof(float));
    float *y = (float *)malloc(n * sizeof(float));
    if (x == NULL || y == NULL) {
        printf("Falha na alocação de memória.\n");
        return EXIT_FAILURE;
    }

    // Lê os valores do vetor x
    printf("Digite os valores do vetor x:\n");
    for (int i = 0; i < n; i++) {
        scanf("%f", &x[i]);
    }

    // Lê os valores do vetor y
    printf("Digite os valores do vetor y:\n");
    for (int i = 0; i < n; i++) {
        scanf("%f", &y[i]);
    }

    // Inicializa a menor diferença
    float menor_distancia = fabs(x[0] - y[0]);
    int contador = 0;

    // Contador para o vetor de endereços
    float **enderecos = (float **)malloc(n * sizeof(float *));
    
    // Calcula as diferenças e encontra os menores di
    for (int i = 0; i < n; i++) {
        float di = fabs(x[i] - y[i]);
        if (di < menor_distancia) {
            menor_distancia = di;
            contador = 0; // Reinicia o contador
            enderecos[contador] = &x[i]; // Armazena o endereço de x
            enderecos[contador + 1] = &y[i]; // Armazena o endereço de y
            contador += 2; // Avança o contador
        } else if (di == menor_distancia) {
            enderecos[contador] = &x[i];
            enderecos[contador + 1] = &y[i];
            contador += 2; // Adiciona novos endereços
        }
    }

    // Exibe os endereços dos elementos que resultaram na menor distância
    printf("Menor distância: %.2f\n", menor_distancia);
    printf("Endereços dos elementos com menor di:\n");
    for (int i = 0; i < contador; i++) {
        printf("Endereco: %p, Valor: %.2f\n", enderecos[i], *enderecos[i]);
    }

    // Libera a memória alocada
    free(x);
    free(y);
    free(enderecos);

    return EXIT_SUCCESS;
}
