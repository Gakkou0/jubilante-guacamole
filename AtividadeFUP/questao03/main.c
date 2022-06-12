/* "Tiro no Escuro" é um jogo bem simples. Três jogadores são vendados e para cada um deles é
colocado um alvo em uma posição aleatória de um tabuleiro quadrado com 5 por 5 espaços. Então,
cada jogador dá uma quantidade palpites de onde está seu alvo até acertá-lo. Cada palpite dado sem
alvos diminui a pontuação do jogador em 1 ponto, enquanto que acertar o seu alvo aumenta em 5
pontos, e acertar o alvo de um outro jogador aumenta em 10 pontos. Ganha o jogador que fizer mais
pontos. Faça um programa que simule este jogo e indique qual o jogador vencedor. Utilize pelo menos
uma struct com os dados dos jogadores e uma matriz para o tabuleiro.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int tabuleiro[5][5] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

struct jogador {
    char nome[10];
    int idade;
    int numVitorias;
}jogadores[3];

void printTabuleiro(){
    printf("  %d | %d | %d | %d | %d", tabuleiro[0][0], tabuleiro[0][1], tabuleiro[0][2], tabuleiro[0][3], tabuleiro[0][4]);
    printf(" \n ------------------- \n");
    printf("  %d | %d | %d | %d | %d", tabuleiro[1][0], tabuleiro[1][1], tabuleiro[1][2], tabuleiro[1][3], tabuleiro[1][4]);
    printf(" \n ------------------- \n");
    printf("  %d | %d | %d | %d | %d", tabuleiro[2][0], tabuleiro[2][1], tabuleiro[2][2], tabuleiro[2][3], tabuleiro[2][4]);
    printf("\n ------------------- \n");
    printf("  %d | %d | %d | %d | %d", tabuleiro[3][0], tabuleiro[3][1], tabuleiro[3][2], tabuleiro[3][3], tabuleiro[3][4]);
    printf("\n ------------------- \n");
    printf("  %d | %d | %d | %d | %d", tabuleiro[4][0], tabuleiro[4][1], tabuleiro[4][2], tabuleiro[4][3], tabuleiro[4][4]);
    printf("\n \n");
}

void resetTabuleiro(){
    for (int i=0; i<5; i++){
        for (int j=0; j<5; j++){
            tabuleiro[i][j] = 0;
        }
    }
}

int main()
{
    int linhaTabu, colunaTabu, novaRodada = 0, valorJogada = 1, partida = 0, palpiteColuna[3], palpiteLinha[3], pontuacao[3] = {0, 0, 0}, i;
    srand(time(NULL));

    printf("Digite o nome dos jogadores: \n");
    scanf("%s %s %s", &jogadores[0].nome, &jogadores[1].nome, &jogadores[2].nome);

    printf("Digite a idade dos jogadores: \n");
    scanf("%d %d %d", &jogadores[0].idade, &jogadores[1].idade, &jogadores[2].idade);

    while (partida == 0){
    
    resetTabuleiro();
    novaRodada = 0;
    valorJogada = 1;

    while (novaRodada<3){
            linhaTabu = rand()%5;
            colunaTabu = rand()%5;
        if (tabuleiro[linhaTabu][colunaTabu] == 0){
            tabuleiro[linhaTabu][colunaTabu] = valorJogada;
            novaRodada++;
            valorJogada++;
        }
    }        
        for (i=0; i<3; i++){
            /*printf("Palpite do %s:", jogadores[i].nome);
            scanf("%d %d", &palpiteLinha[i], &palpiteColuna[i]);*/
            palpiteLinha[i] = rand() % 5;
            palpiteColuna[i] = rand() % 5;

            if (tabuleiro[palpiteLinha[i]][palpiteColuna[i]]==0){
                if (pontuacao[i] != 0){
                    pontuacao[i] -= 1;
                }
            }
            if (i==0){
                if (tabuleiro[palpiteLinha[i]][palpiteColuna[i]]==1){
                    pontuacao[i] += 5;
                }
                if (tabuleiro[palpiteLinha[i]][palpiteColuna[i]]!=1 && tabuleiro[palpiteLinha[i]][palpiteColuna[i]]!=0){
                    pontuacao[i] += 10;
                }
            }
            if (i==1) {
                if (tabuleiro[palpiteLinha[i]][palpiteColuna[i]]==2){
                    pontuacao[i] += 5;
                }
                if (tabuleiro[palpiteLinha[i]][palpiteColuna[i]]!=2 && tabuleiro[palpiteLinha[i]][palpiteColuna[i]]!=0){
                    pontuacao[i] += 10;
                }
            }
            if (i==2){
                if (tabuleiro[palpiteLinha[i]][palpiteColuna[i]]==3){
                    pontuacao[i] += 5;
                }
                if (tabuleiro[palpiteLinha[i]][palpiteColuna[i]]!=3 && tabuleiro[palpiteLinha[i]][palpiteColuna[i]]!=0){
                    pontuacao[i] += 10;
                }
            }

        }

        printTabuleiro();

        for (i=0; i<3; i++){
            printf("%s: %d \n", jogadores[i].nome, pontuacao[i]);
        }

        if (pontuacao[0]>=20 || pontuacao[1]>=20 || pontuacao[2]>=20){
            partida = 1;
        }

    }

   return 0;
}