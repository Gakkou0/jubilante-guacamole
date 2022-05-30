#include <stdio.h>
#include <stdlib.h>

    struct endereco{
    char rua[50];
    char bairro[50];
    char cidade[50];
    char estado[50];
    int cep;
    };

    struct cadastro{
    char nome[50];
    int indentidade;
    int telefone;
    int cpf;
    int idade;
    int salario;
    char ec[50];
    char sexo[2];
    struct endereco ender;
    }c[5];

    int main(){

    int i, maior, f, m, ind;

    for(i=0; i<5; i++){
    printf("CADASTRO %d\n" , i+1);
    printf("\nNome: ");
    scanf("%s", &c[i].nome);
    printf("\nIndentidade: ");
    scanf("%d" , &c[i].indentidade);
    printf("\nTelefone: ");
    scanf("%d" , &c[i].telefone);
    printf("\nCPF: ");
    scanf("%d" , &c[i].cpf);
    printf("\nIdade: ");
    scanf("%d" , &c[i].idade);
    printf("\nSalario: ");
    scanf("%d" , &c[i].salario);
    printf("\nEstado Civil: ");
    scanf("%s", &c[i].ec);
    printf("\nSexo: ");
    scanf("%s", &c[i].sexo);
   /* printf("\nEndereco: ");
        printf("\nRua:");
        gets(c[i].ender.rua);
        printf("\nBairro:");
        gets(c[i].ender.bairro);
        printf("\nCidade:");
        gets(c[i].ender.cidade);
        printf("\nEstado:");
        gets(c[i].ender.estado);
        printf("\nCEP:");
        scanf("%d" , &c[i].ender.cep);
    } */
    }
    for(i=0; i<5; i++){
        if(c[i].idade>maior){
        maior=c[i].idade;
        printf("A pessoa de cadastro %d possui a maior idade" , i+1);
        }
    }

    for(i=0; i<5; i++){
        if(c[i].salario>1000){
        printf("A pessoa de cadastro %d possui o salario maior que 1000" , i+1);
        }
    }
    
    printf("Digite uma indentidade: ");
    scanf("%d" , ind);
    for(i=0; i<5; i++){
       if(ind==c[i].indentidade){
           printf("\nNome: %c" , c[i].nome);
           printf("\nIndentidade: %d" , c[i].indentidade);
           printf("\nTelefone: %d" , c[i].telefone);
           printf("\nCPF: %d" , c[i].cpf);
           printf("\nIdade: %d" , c[i].idade);
           printf("\nSalario: %d" , c[i].salario);
           printf("\nEstado Civil: %c" , c[i].ec);
           printf("\nSexo: %c" , c[i].sexo);
           printf("\nEndereco");
           printf("\nRua: %c" , c[i].ender.rua);
           printf("\nBairro: %c" , c[i].ender.bairro);
           printf("\nCidade: %c" , c[i].ender.cidade);
           printf("\nEstado: %c" , c[i].ender.estado);
           printf("\nCEP: %d" , c[i].ender.cep);
       } 
    }
    
    return 0;
}