#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char frase[10], condicao, condicao2;
    int k;
    scanf("%d", &k);
    scanf("%s", &frase);
    int tam = strlen(frase), i;

    if (k>0){
        condicao = 'z' - k;
        condicao2 = condicao - 32
        
        for (i=0; i<tam; i++){
            if (frase[i]>condicao || frase[i]> condicao2){
                frase[i] -= (26-k);
            }else{
                frase[i] += k;
            }
        }
    }
        if (k<0){
        condicao = 'a' + (-k);
        condicao2 = condicao - 32
        for (i=0; i<tam; i++){
            if (frase[i]<condicao || frase[i]< condicao2){
                frase[i] += (26+k);
            }else{
                frase[i] += k;
            }
        }
    }
    
    printf("%s", frase);

    return 0;
}