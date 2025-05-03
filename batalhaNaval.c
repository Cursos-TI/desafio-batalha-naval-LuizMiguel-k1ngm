#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.


   int main() {
	
	int tabuleiro[10][10];
	
	for(int i =0; i <10; i++){
		for(int j =0; j<10; j++){
			tabuleiro[i][j] = 0;
		}
	}
	
	//navio vertical
	tabuleiro[3][2] =3;
	tabuleiro[4][2] =3;
	tabuleiro[5][2] =3;
	
		//navio horizontal
	tabuleiro[7][3] =3;
	tabuleiro[7][4] =3;
	tabuleiro[7][5] =3;
	
	
	printf("BATALHA NAVAL\n");
	for (int i =0; i <10; i++){
		for(int j =0; j < 10; j++){
			printf("%4d", tabuleiro[i][j]);
		}
		printf("\n");
	}
	
	
	

    return 0;
}
