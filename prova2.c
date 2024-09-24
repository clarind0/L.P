#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

#define RANGE_MAX 10
#define TAM 5

typedef struct {
    float x;
    float y;
} Coord;

void PreencherCoord(Coord *coord, int n) {
    for (int i = 0; i < n; i++) {
        coord[i].x = (float)(rand() % RANGE_MAX); 
        coord[i].y = (float)(rand() % RANGE_MAX);
    }
}

Coord PontoDist(Coord *coord, int n, Coord coordref) {
    // Inicializa a distância mínima com a distância do primeiro ponto
    float distMin = sqrt(pow(coord[1].x - coordref.x, 2) + pow(coord[1].y - coordref.y, 2));
    Coord pontoMaisProximo = coord[0];

    for (int i = 2; i < n; i++) {
        float dist = sqrt(pow(coord[i].x - coordref.x, 2) + pow(coord[i].y - coordref.y, 2));
        
        if (dist < distMin) {
            distMin = dist;
            pontoMaisProximo = coord[i];
        }
    }
    return pontoMaisProximo;
}

int main() {
    // Aloca memória para os pontos
    Coord *coords = (Coord*)malloc(TAM * sizeof(Coord));
    if (coords == NULL) {
        printf("Falha na alocação de memória\n");
        return EXIT_FAILURE; // Retorna erro se não conseguiu alocar
    }

    srand(time(NULL)); // Inicializa a semente do gerador de números aleatórios

    PreencherCoord(coords, TAM); // Preenche os pontos com coordenadas aleatórias

    // Exibe os pontos gerados
    for (int i = 0; i < TAM; i++) {
        printf("pontos[%d]:\n", i);
        printf("x: %.1f\n", coords[i].x);
        printf("y: %.1f\n\n", coords[i].y);
    }

    // Calcula o ponto mais próximo do primeiro ponto
    Coord pontoMaisProximo = PontoDist(coords, TAM, coords[0]);

    printf("Ponto mais próximo de coords[0]:\n");
    printf("x: %.1f\n", pontoMaisProximo.x);
    printf("y: %.1f\n", pontoMaisProximo.y);

    // Libera a memória alocada
    free(coords);

    return EXIT_SUCCESS;
}
