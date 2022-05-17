#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num[10], somaPosi = 0;
    int i, contaNeg = 0; 

    for (i=0; i<10; i++){
        scanf("%f", &num[i]);
        if (num[i]<0){
            contaNeg++;
        }
        if (num[i]>0){
            somaPosi += num[i];
        }
    }

    printf("%.1f \n", somaPosi);
    printf("%d \n", contaNeg);
    return 0;
}
