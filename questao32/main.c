#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao = 3;
    float speed;

    while (opcao!=0 && opcao!=1 && opcao!=2){

    printf("Escolha uma opcao: \n");
    printf("1: km/h para m/s  \n");
    printf("2: m/s para km/h \n");
    printf("0: Sair \n");

    scanf("%d", &opcao);

    if (opcao == 0) {
        return 0;
    }

    if (opcao == 1) {
        printf("Digite a velocidade em km/h \n");
        scanf("%f", &speed);

        printf("A velocidade em m/s eh: %f \n", speed/3.6);
        opcao = 3;
    }

    if (opcao == 2) {
        printf("Digite a velocidade em m/s \n");
        scanf("%f", &speed);

        printf("A velocidade em km/h eh: %f \n", speed * 3.6);
        opcao = 3;
    }
    if (opcao!=0 && opcao!=1 && opcao!=2) {
        printf("Opcao invalida \n");
    }

    }
    return 0;
}
