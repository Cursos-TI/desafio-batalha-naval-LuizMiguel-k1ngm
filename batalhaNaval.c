#include <stdio.h>

 int main() {
     char matriz[10][10];

     for (int i = 0; i < 10;  i++){
        for (int j =0;  j < 10;  j++){
            matriz[i][j] = '0';
        }
     }


   // colocar os navios na vertical e horizontal

matriz[1][2] = '3';
matriz[2][2] = '3';
matriz[3][2] = '3';

matriz[6][5] ='3';
matriz[6][6] ='3';
matriz[6][7] ='3';

// cone
matriz [6][4]='1';

for(int j = 3; j <=5; j++){
    matriz[7][j] = '1';
}

for(int j = 2; j <=6; j++){
    matriz[8][j] = '1';
}


// octaedro

matriz[0][6] = '1';
matriz[2][6] = '1';

for(int j = 5; j<=7; j++){
    matriz[1][j] = '1';
}



//cruz

matriz[3][3] = '1';
matriz[5][3] = '1';

for(int j = 1; j<=5; j++){
    matriz[4][j] = '1';
}







printf("Matriz com navios\n");

for(int i = 0; i <10; i++){
    for(int j = 0; j<10; j++){
        printf("%c ", matriz[i][j]);
    }

    printf("\n");
}



    return 0;
}

	

