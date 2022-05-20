#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tabuleiro[3][3] = { {0, 0, 0},
                            {0, 0, 0},
                            {0, 0, 0} }, i, j, x, y, endGame = 0;

    do {
       
        for (i=0; i<3; i++){
            for (j=0; j<3; j++){
                printf("%d  ", tabuleiro[i][j]);
            }
            printf("\n");
        }
        printf("Qual sua proxima jogada? \n");
        scanf("%d  %d", &x, &y);

        if (tabuleiro[x-1][y-1] != 0){
            printf("Posicao ja selecionada \n");
        } else {
            tabuleiro[x-1][y-1] += 1;
        }
        if (tabuleiro[0][0] + tabuleiro[0][1] + tabuleiro[0][2] ==3 ||
        tabuleiro[1][0] + tabuleiro[1][1] + tabuleiro[1][2] == 3||
        tabuleiro[2][0] + tabuleiro[2][1] + tabuleiro[2][2] == 3){
            printf("Voce venceu \n");
            endGame = 1;
        }
        if (tabuleiro[0][0] + tabuleiro[1][0] + tabuleiro[2][0] ==3 ||
        tabuleiro[0][1] + tabuleiro[1][1] + tabuleiro[2][1] == 3||
        tabuleiro[0][2] + tabuleiro[1][2] + tabuleiro[2][2] == 3){
            printf("Voce venceu \n");
            endGame = 1; 
        }
         if (tabuleiro[0][0] + tabuleiro[1][1] + tabuleiro[2][2] ==3 ||
        tabuleiro[2][0] + tabuleiro[1][1] + tabuleiro[0][2] == 3){
            printf("Voce venceu \n");
            endGame = 1;
        }
    } while (endGame == 0);
    return 0;
}
