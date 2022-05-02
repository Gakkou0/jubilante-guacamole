#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num[2];

    printf("Digite a primeira e segunda nota\n");
    scanf("%f %f", &num[0], &num[1]);

    if ((num[0]<0 || num[0]>10) || (num[1]<0 || num[1]>10)){
        printf("notas invalidas \n");
        return 0;
    } else {
        printf("A media eh: %.1f ", (num[0] + num[1])/2);
    }

    return 0;
}
