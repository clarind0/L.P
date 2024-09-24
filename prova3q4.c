#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int x; // Valor armazenado
    struct Node *next; // Ponteiro para o próximo elemento
} Node;

void imprimirProximo(Node *atual) {
    if (atual == NULL) {
        printf("Elemento fornecido é nulo.\n");
        return;
    }
    
    if (atual->next != NULL) {
        printf("O próximo elemento tem x = %d\n", atual->next->x);
    } else {
        printf("O elemento recebido é o último da lista.\n");
    }
}
