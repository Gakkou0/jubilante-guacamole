/* Um grupo de crian�as brinca de piratas e troca mensagens "secretas" entre si invertendo o texto, ou
seja, escrevendo de tr�s para frente. Fa�a um programa que pegue do usu�rio uma mensagem e
imprima na tela sua forma "secreta". Ex.: "FUTEBOL HOJE MAIS TARDE" se transformaria em
"EDRAT SIAM EJOH LOBETUF". */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void invertFrase (char str[]) {
    int i, aux, fim, tam = strlen(str);

    fim = tam - 1;
    for(i = 0; i < tam/2; i++){
        aux = str[i];
        str[i] = str[fim];
        str[fim] = aux;
        fim--;
    }
}

int main()
{
    char frase[100];

    printf("Digite a frase: ");
    gets(frase);

    invertFrase(frase);
    printf("%s", frase);
    return 0;
}

