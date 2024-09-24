#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m, k, t;

    // Solicita as dimensões da matriz
    printf("Digite o número de linhas (n): ");
    scanf("%d", &n);
    printf("Digite o número de colunas (m): ");
    scanf("%d", &m);

    // Aloca memória para a matriz x
    int **x = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        x[i] = (int *)malloc(m * sizeof(int));
    }

    // Lê os valores da matriz x
    printf("Digite os elementos da matriz x:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &x[i][j]);
        }
    }

    // Solicita os valores de k e t
    printf("Digite o valor de k: ");
    scanf("%d", &k);
    printf("Digite o valor de t: ");
    scanf("%d", &t);

    // Aloca memória para a matriz y
    int **y = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        y[i] = (int *)malloc(m * sizeof(int));
    }

    // Preenche a matriz y conforme a regra
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (k < x[i][j] && x[i][j] < t) {
                y[i][j] = 1;
            } else {
                y[i][j] = 0;
            }
        }
    }

    // Exibe a matriz y
    printf("Matriz y:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", y[i][j]);
        }
        printf("\n");
    }

    // Libera a memória alocada
    for (int i = 0; i < n; i++) {
        free(x[i]);
        free(y[i]);
    }
    free(x);
    free(y);

    return EXIT_SUCCESS;
}
