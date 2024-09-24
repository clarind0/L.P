#include <stdio.h>
#include <string.h>

int main() {
    char texto[100]; // Buffer para armazenar o texto
    char letraTrocar, letraNova;

    // Solicita ao usuário que insira um texto
    printf("Digite um texto (máximo 99 caracteres): ");
    fgets(texto, sizeof(texto), stdin);
    
    // Remove a nova linha, se presente
    texto[strcspn(texto, "\n")] = '\0';

    // Solicita a letra a ser trocada
    printf("Qual letra você deseja trocar? ");
    scanf(" %c", &letraTrocar);

    // Solicita a nova letra
    printf("Qual letra será usada para a troca? ");
    scanf(" %c", &letraNova);

    // Realiza a troca no texto
    for (int i = 0; i < strlen(texto); i++) {
        if (texto[i] == letraTrocar) {
            texto[i] = letraNova;
        }
    }

    // Exibe o resultado
    printf("Texto após a troca: %s\n", texto);

    return 0;
}
