#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct carta {
    char naipe[10];
    int numero; 
}baralho[52];

int main (){
    
    srand(time(NULL));
    int i, j, k = 0, numCartas, cartaRandom, confirmaCarta = 0, mascBaralho[52], soma = 0, naipe[4] = {0, 0, 0, 0};

    for(i=0; i<52; i++){
        mascBaralho[i] = 0;
    }

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

    scanf("%d", &numCartas);

    for (i=0; i<numCartas; i++){
        confirmaCarta = 0;
        
        while(confirmaCarta == 0){
            cartaRandom = rand() % 52;

            if (mascBaralho[cartaRandom]==0){
                confirmaCarta = 1;
                mascBaralho[cartaRandom] = 1;
                soma += baralho[cartaRandom].numero;
                if (cartaRandom < 13) {
                    naipe[0]++;
                }
                if (cartaRandom > 12 && cartaRandom < 26) {
                    naipe[1]++;
                }
                if (cartaRandom > 25 && cartaRandom < 39) {
                    naipe[2]++;
                }
                if (cartaRandom > 38) {
                    naipe[3]++;
                }
            }
        }     

        printf("%s \n", baralho[cartaRandom].naipe);
        printf("%d \n", baralho[cartaRandom].numero);
        printf("%d \n", soma);
        printf("Cartas de Copas sorteadas: %d \n", naipe[0]);
        printf("Cartas de Ouros sorteadas:%d \n", naipe[1]);
        printf("Cartas de Espadas sorteadas:%d \n", naipe[2]);
        printf("Cartas de Paus sorteadas:%d \n", naipe[3]);


        printf("\n");

    }

    return 0;
}