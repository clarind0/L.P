#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define QTD_ARMARIOS 8

// função para mostrar a disponibilidade dos armários
void mostrarArmarios(char map) {
    printf("disponibilidade dos armarios:\n");
    for (int i = 0; i < QTD_ARMARIOS; i++) {
        if (map & (1 << i)) {
            printf("armario %d: ocupado\n", i + 1);
        } else {
            printf("armario %d: disponivel\n", i + 1);
        }
    }
}

int main() {
    char map = 0; // todos os armários estão disponíveis
    int opcao;

    srand(time(NULL)); 

    printf("gerencie seu armario\n");

    do {
        printf("\nopcoes:\n");
        printf("1.ocupar um armario\n");
        printf("2.desocupar um armario\n");
        printf("3.sair do programa\n");
        printf("escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                if (map == 0xFF) {
                    printf("todos os armarios estao ocupados.\n");
                } else {
                    int armario;
                    do {
                        armario = rand() % QTD_ARMARIOS; // escolhe aleatoriamente um armário
                    } while (map & (1 << armario)); // verifica se o armário está disponível

                    map |= (1 << armario); 
                    printf("armario %d foi ocupado.\n", armario + 1);
                }
                break;

            case 2:
                mostrarArmarios(map);
                int armario;
                do {
                    printf("digite o numero do armario que deseja desocupar (1-%d): ", QTD_ARMARIOS);
                    scanf("%d", &armario);
                    if (armario < 1 || armario > QTD_ARMARIOS) {
                        printf("armario invalido. tente novamente.\n");
                    } else if (!(map & (1 << (armario - 1)))) {
                        printf("O armario %d ja esta desocupado. tente novamente.\n", armario);
                    }
                } while (armario < 1 || armario > QTD_ARMARIOS || !(map & (1 << (armario - 1))));

                map &= ~(1 << (armario - 1));
                printf("armario %d foi desocupado.\n", armario);
                break;

            case 3:
                printf("O programa foi encerrado.\n");
                break;

            default:
                printf("opcao invalida. tente novamente.\n");
        }

        mostrarArmarios(map);
    } while (opcao != 3);

    return 0;
}
