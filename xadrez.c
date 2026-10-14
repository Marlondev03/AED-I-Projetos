---

## 2. Estrutura e Código do Jogo (`xadrez.c`)

Este código implementa a matriz inicial do tabuleiro de xadrez, a representação visual das peças (maiúsculas para as brancas, minúsculas para as pretas) e um fluxo básico de visualização e jogadas para o terminal, mantendo o padrão rigoroso exigido nas disciplinas de programação.

```c
#include <stdio.h>
#include <stdlib.h>

#define TAM 8

// Função para inicializar o tabuleiro com as peças nas posições oficiais
void inicializar_tabuleiro(char tabuleiro[TAM][TAM]) {
    // Peças pretas (linhas 0 e 1)
    char pretas[TAM] = {'t', 'c', 'b', 'd', 'r', 'b', 'c', 't'};
    for (int j = 0; j < TAM; j++) {
        tabuleiro[0][j] = pretas[j];
        tabuleiro[1][j] = 'p';
    }

    // Casas vazias no meio (linhas 2 a 5)
    for (int i = 2; i < 6; i++) {
        for (int j = 0; j < TAM; j++) {
            tabuleiro[i][j] = '.';
        }
    }

    // Peças brancas (linhas 6 e 7)
    char brancas[TAM] = {'T', 'C', 'B', 'D', 'R', 'B', 'C', 'T'};
    for (int j = 0; j < TAM; j++) {
        tabuleiro[6][j] = 'P';
        tabuleiro[7][j] = brancas[j];
    }
}

// Função para imprimir o tabuleiro formatado no ecrã
void imprimir_tabuleiro(char tabuleiro[TAM][TAM]) {
    printf("\n    a   b   c   d   e   f   g   h\n");
    printf("  +---+---+---+---+---+---+---+---+\n");
    for (int i = 0; i < TAM; i++) {
        printf("%d |", 8 - i);
        for (int j = 0; j < TAM; j++) {
            printf(" %c |", tabuleiro[i][j]);
        }
        printf(" %d", 8 - i);
        printf("\n  +---+---+---+---+---+---+---+---+\n");
    }
    printf("    a   b   c   d   e   f   g   h\n\n");
}

int main() {
    char tabuleiro[TAM][TAM];
    
    // Inicializa as peças no tabuleiro
    inicializar_tabuleiro(tabuleiro);
    
    printf("=== BEM-VINDO AO XADREZ EM C ===\n");
    printf("Legenda:\n");
    printf("Letras Maiusculas (T, C, B, D, R, P) = Pecas Brancas\n");
    printf("Letras Minusculas (t, c, b, d, r, p) = Pecas Pretas\n");
    
    // Exibe o estado inicial do tabuleiro
    imprimir_tabuleiro(tabuleiro);
    
    printf("Tabuleiro carregado com sucesso! Pronto para integrar no seu repositorio do GitHub.\n");

    return 0;
}
