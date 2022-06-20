#include <stdio.h>
#include <stdlib.h>

struct carta {
    char naipe[10];
    int numero; 
}baralho[52];

int main (){
    
    int i, j, k = 0;

    for (i=0; i<4; i++){
        for(j=0; j<13; j++){
            if (i==0){
                strcpy (baralho[k].naipe, "Copas");
            }
            if (i==1){
                strcpy (baralho[k].naipe, "Ouros");
            }
            if (i==2){
                strcpy (baralho[k].naipe, "Espadas");
            }
            if (i==3){
                strcpy (baralho[k].naipe, "Paus");
            }

            baralho[k].numero = j + 1;
            k++;
        }
    }

    
    return 0;
}