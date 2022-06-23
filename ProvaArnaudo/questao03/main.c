#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    int matriz[4][4], i, j;
    srand(time(NULL));

    for (i=0; i<4; i++){
        for (j=0; j<4; j++){
            matriz[i][j] = rand() % 10;
        }
    }

    for (i=0; i<4; i++){
        printf("%d", matriz[i][i]);
    }
    
    j=3;
    for (i=0; i<4; i++){
        printf("%d", matriz[i][j]);
        j--;
    }
    return 0;
}

