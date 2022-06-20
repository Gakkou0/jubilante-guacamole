#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct carta {
    char naipe[10];
    int numero; 
}baralho[52];

struct jogador {
    char nome[10];
    int pontos;
}player;

int main (){
    
    player.pontos = 0;
    srand(time(NULL));
    int i, j, k = 0, numCartas, cartaRandom, confirmaCarta = 0, mascBaralho[52], soma = 0, partida = 0, continuar = 0, jogada = 0;

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

    printf("Digite seu nome jogador: \n");
    gets(player.nome);

    while (jogada == 0){
        soma = 0;
        partida = 0;
        while(partida == 0){
                confirmaCarta = 0;
                
                while(confirmaCarta == 0){
                    cartaRandom = rand() % 52;

                    if (mascBaralho[cartaRandom]==0){
                        confirmaCarta = 1;
                        mascBaralho[cartaRandom] = 1;
                        soma += baralho[cartaRandom].numero;
                        }
                    }    

                printf("%s \n", baralho[cartaRandom].naipe);
                printf("%d \n \n", baralho[cartaRandom].numero);
                printf("soma: %d \n", soma);

                printf("\n");

                if (soma>21){
                    printf("Voce perdeu\n");
                    partida = 1;
                    break;
                }

                printf("deseja continuar? 0 para continuar e 1 para desistir \n");
                scanf("%d", &continuar);

                if (continuar == 1){
                    partida = 1;
                    printf("Voce ganhou %d pontos\n", soma);
                    player.pontos += soma;
                }
                
        }
        printf("deseja continuar jogando? 0 para continuar e 1 para fechar o jogo \n");
        scanf("%d", &continuar);

        if (continuar == 1){
            jogada = 1;
            printf("pontuacao final: %d", player.pontos);
    }

}
return 0;
}