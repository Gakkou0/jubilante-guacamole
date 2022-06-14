#include <stdio.h>
#include <stdlib.h>

void dataExte(int dia, int mes, int ano){
    char meses[12][30] = {{"de Janeiro de"}, {"de Fevereiro de"}, {"de Marco de"}, {"de Abril de"}, {"de Maio de"}, {"de Junho de"}, {"de Julho de"}, {"de Agosto de"}, {"de Setembro de"}, {"de Outubro de"}, {"de Novembro de"}, {"de Dezembro de"}};
    printf("%d %s %d", dia, meses[mes-1], ano);
}

int main(){
    int dia, mes, ano;
    scanf("%d %d %d", &dia, &mes, &ano);
    dataExte(dia, mes, ano);
    return 0;
}