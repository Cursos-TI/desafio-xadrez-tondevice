#include <stdio.h>

int main() {
    /*
    Rook (Torre) - Movimento Reto
    Usamos um laço for para mover 5 casas para a Direita
    */ 
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    printf("\n");

    /*
    Bishop (Bispo) - Movimento Diagonal
    Usamos um while para mover 5 casas na diagonal "Cima Direita"
    Diagonal = sobe 1 e vai 1 pra direita
    */
   
    printf("Movimento do Bispo:\n");
    int j = 1;
    while (j <= 5) {
        printf("Cima Direita\n");
        j++;
    }

    printf("\n");

    /*
    Queen (Rainha) - Movimento para qualquer lado
    Usamos um do-while para mover 8 casas para a Esquerda
    */
    printf("Movimento da Rainha:\n");
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= 8);

    printf("\n");

    /* 
    Knight (Cavalo) - Movimento em "L"
    O Cavalo anda 2 para baixo e 1 para a esquerda
    Usamos um for e um while aninhado para simular esse "L"
    */ 
    printf("Movimento do Cavalo:\n");

    for (int move = 1; move <= 3; move++) {
        int passosBaixo = 1;

        // Primeiro: desce 2 casas
        while (passosBaixo <= 2) {
            printf("Baixo\n");
            passosBaixo++;
        }

        // Depois: anda 1 casa para a esquerda
        printf("Esquerda\n");

        // Separar os movimentos pra ficar mais visual
        printf("\n");
    }

    return 0;
}
