#include <stdio.h>
#include <stdlib.h>

struct bota{
    int id;
    char lado;
    int tamanho;
};

int main()
{
    int numBotaInd, i, flag = 0, pares = 0;
    
    printf("Por favor digite um numero par \n");
    while (flag == 0) {
    scanf("%d", &numBotaInd);
        if (numBotaInd%2!=0 || numBotaInd < 2 || numBotaInd > 10000){
            printf("\n Por favor digite um numero par maior que 2 e menor que 10000 \n");
        }
            else {
            flag = 1;
        }
    }

    struct bota botas[numBotaInd];
    
        for(i=0; i<numBotaInd; i++){
            
            flag = 0;
            while (flag == 0){

                printf("digite os valores da bota [%d] \n", i+1);

                botas[i].id = i+1;
                scanf("%d %c", &botas[i].tamanho, &botas[i].lado);

                if (botas[i].tamanho<30 || botas[i].tamanho>60 || (botas[i].lado!='d' && botas[i].lado!='e')){
                    printf("\nValores invalidos \n");
                }else{
                    flag = 1;
                }
            }
        }
        
        for (i=0; i<numBotaInd; i++){
            for (int j=i+1; j<numBotaInd; j++){
                    if(botas[i].id != 0 && botas[j].id != 0 && botas[i].tamanho == botas[j].tamanho && ((botas[i].lado == 'd' && botas[j].lado == 'e') || (botas[i].lado == 'e' && botas[j].lado == 'd'))){
                        pares++;
                        botas[i].id = 0;
                        botas[j].id = 0;
                    }
                botas[i].id = 0;
            }
        }
        
        printf("O numero de pares formados sao: \n");
        if (pares == 1){
            printf("\n%d par", pares);
        }else if (pares == 0){
            printf("\nNenhum par pode ser formado");
        } else {
            printf("\n%d pares", pares);
        }
        

    return 0;
}