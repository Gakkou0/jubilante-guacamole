#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int board[3][3] = { {0, 0, 0},
                        {0, 0, 0},
                        {0, 0, 0} }, i, j, lineUser, colunUser, linePC, colunPc, endGame = 0, turnPc, turnUser;
    srand( (unsigned)time(NULL) );

    do {
        turnPc = 0;
        turnUser = 0;
        for (i=0; i<3; i++){
            for (j=0; j<3; j++){
                printf("%d  ", board[i][j]);
            }
            printf("\n");
        }
        while (turnUser == 0){
            printf("Select your position:  \n");
            scanf("%d  %d", &lineUser, &colunUser);

            if (board[lineUser-1][colunUser-1] != 0){
                printf("this position has been selected \n");
            } else {
                board[lineUser-1][colunUser-1] = 1;
                turnUser = 1;
            }
                
        }
        if (board[0][0] != 0 && board[0][1] != 0 && board[0][2] != 0 && 
            board[1][0] != 0 && board[1][1] != 0 && board[1][2] != 0 && 
            board[2][0] != 0 && board[2][1] != 0 && board[2][2] != 0){
                printf("draw \n");
                break;
            }
        while (turnPc == 0){
        linePC = rand() %  3;
        colunPc = rand() % 3;

        if (board[linePC][colunPc]==0){
            board[linePC][colunPc] = -1;
            turnPc = 1;
        } 
        }
        if (board[0][0] + board[0][1] + board[0][2] ==3 ||
        board[1][0] + board[1][1] + board[1][2] == 3||
        board[2][0] + board[2][1] + board[2][2] == 3){
            printf("You win \n");
            endGame = 1;
        }
        if (board[0][0] + board[1][0] + board[2][0] ==3 ||
        board[0][1] + board[1][1] + board[2][1] == 3||
        board[0][2] + board[1][2] + board[2][2] == 3){
            printf("You win \n");
            endGame = 1; 
        }
         if (board[0][0] + board[1][1] + board[2][2] ==3 ||
        board[2][0] + board[1][1] + board[0][2] == 3){
            printf("You win \n");
            endGame = 1;
        }
        if (board[0][0] + board[0][1] + board[0][2] == -3 ||
        board[1][0] + board[1][1] + board[1][2] == -3||
        board[2][0] + board[2][1] + board[2][2] == -3){
            printf("You lose\n");
            endGame = 1;
        }
        if (board[0][0] + board[1][0] + board[2][0] == -3 ||
        board[0][1] + board[1][1] + board[2][1] == -3||
        board[0][2] + board[1][2] + board[2][2] == -3){
            printf("You lose \n");
            endGame = 1; 
        }
         if (board[0][0] + board[1][1] + board[2][2] == -3 ||
        board[2][0] + board[1][1] + board[0][2] == -3){
            printf("You lose \n");
            endGame = 1;
        }
        

    } while (endGame == 0);
    for (i=0; i<3; i++){
            for (j=0; j<3; j++){
                printf("%d  ", board[i][j]);
            }
            printf("\n");
        }
    return 0;
}
