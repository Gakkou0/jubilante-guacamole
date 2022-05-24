#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, naoMultiplo[100], contaMult = 0;

    for (i = 0; contaMult < 100; i++){
        if (i%7!=0){
            naoMultiplo[contaMult] = i;
            printf("%d \n", naoMultiplo[contaMult]);
            contaMult++;
        }
    }
    return 0;
}
