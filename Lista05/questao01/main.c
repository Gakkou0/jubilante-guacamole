#include <stdio.h>
#include <stdlib.h>
int **alocaMatriz (int linha, int coluna){
    int **matriz, i;
    matriz=(int**)malloc(linha * sizeof(int*));
    for(i=0;i<linha;i++){
        matriz[i]=(int**)malloc(coluna * sizeof(int *));
    }
    return matriz;
}

int **mult(int **m1, int **m2, int a, int b, int c, int d){
   int i, j, k, l, **m3, aux=0;
   m3=alocaMatriz(a,d);
   **m3=0;
   if(b==c){
        for(i=0;i<a;i++){
            for(j=0;j<d;j++){
                for(k=0;k<b;k++){
                    aux=(**m3)+(**m1)*(**m2);
                }
                aux=**m3;
            }
        }
        printf("%d " , **m3);
   }
   else{
       printf("\nNao eh possivel multiplicar as matrizes");
       exit(1);
   }
}
int main()
{
    int a, b, c, d;
    int i, j;
    int **m1[a][b], **m2[c][d], **m3[a][d];
    printf("Digite a quantidade de linhas da matriz 1: ");
    scanf("%d" , &a);
    printf("Digite a quantidade de colunas da matriz 1: ");
    scanf("%d" , &b);
    printf("Digite a quantidade de linhas da matriz 2: ");
    scanf("%d" , &c);
    printf("Digite a quantidade de colunas da matriz 2: ");
    scanf("%d" , &d);

    alocaMatriz(a,b);

    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
           printf("\nDigite o valor %d %d da matriz 1: " , i+1 , j+1);
           scanf("%d" , &m1[i][j]);
        }
    }

    alocaMatriz(c,d);

    for(i=0;i<c;i++){
        for(j=0;j<d;j++){
            printf("\nDigite o valor %d %d da matriz 2: " , i+1 , j+1);
            scanf("%d" , &m2[i][j]);
        }
    }

    printf("\n---Matriz 1---");
    printf("\n");
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            printf("%d " , m1[i][j]);
        }
    }
    printf("\n");
    printf("\n---Matriz 2---");
    printf("\n");
    for(i=0;i<c;i++){
        for(j=0;j<d;j++){
            printf("%d " , m2[i][j]);
        }
    }
    printf("\n---Matriz 3---");
    printf("\n");
    mult(**m1, **m2, a, b, c, d);

free(**m1);
free(**m2);
free(**m3);
    return 0;
}
