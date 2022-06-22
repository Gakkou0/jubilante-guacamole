#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ehImpar(int num){
   if (num % 2 == 0){
    return 0;
   }else{
    return 1;
   }
}

int main (){
    srand(time(NULL));
    int vetorRand[100], num, contaPares = 0, i, j=0, k=0;

    for(i=0; i<100; i++){
        num = (rand() % 200) - 100;
        if (num % 2 == 0) {
            contaPares++;
        }
        vetorRand[i] = num;
    }

    int pares[contaPares], impares[100-contaPares];

    for(i=0; i<100; i++){
        if (vetorRand[i] % 2 == 0) {
            pares[j] = vetorRand[i];
            j++;
        }else{
            impares[k] = vetorRand[i];
            k++;
        }
    }

    for (i=0; i<100; i++){
        printf("%d ", vetorRand[i]);
    }
    printf("\n \n");
    for (j=0; j<contaPares; j++){
        printf("%d ", pares[j]);
    }
    printf("\n \n");
    for (k=0; k<(100-contaPares); k++){
        printf("%d ", impares[k]);
    }
    return  0; 
}