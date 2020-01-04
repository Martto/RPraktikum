#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vrstice = 25;
    int presledki = vrstice - 1;
    int debelina = vrstice/3;

    if (debelina < 2) {
        debelina = 2;
    }

    printf("Naredi smrekco\n\n");

    for (int i = 1; i <= vrstice; i++) {
        //narisi presledke
        for (int k = 0; k < presledki; k++) {
            printf(" ");
        }
        presledki--;

        //narisi zvezdice
        for (int j = 1; j < i*2; j++) {
            printf("*");
        }

        printf("\n");
    }

    //rišemo steblo
    for (int i = 0; i < 2; i++) {
        for(int j = 0; j < vrstice-1; j++) {
            printf(" ");
        }
        printf("**");
        printf("\n");
    }

    return 0;
}
