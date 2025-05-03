#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

#include <stdio.h>

 int main() {
    char matriz[10][10];  // matriz 10x10 de caracteres

    // Inicializar a matriz com '0'
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            matriz[i][j] = '0';
        }
    }

    // Colocar navio vertical com '3' em (1,2), (2,2), (3,2)
    matriz[1][2] = '3';
    matriz[2][2] = '3';
    matriz[3][2] = '3';

    // Colocar navio horizontal com '3' em (6,5), (6,6), (6,7)
    matriz[6][5] = '3';
    matriz[6][6] = '3';
    matriz[6][7] = '3';

    // Exibir a matriz
    printf("Matriz com navios:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf(" %c ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
	
	
	

