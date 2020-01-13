#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void funkcija();
int random();

/*
%c - char
%d - decimal
%f - float
%s - string
*/

void izpisArgumentovCifer(int stevila[], int n);
void funkcija();
int random();

int main(int argc, char *argv[]) {
    ukazi;
    
    if (argc == 2) {
        printf("Argument je %s", argv[1]); 
    }
    else if (argc > 2) {
        printf("Preveč argumentov");
        int a = atoi(argv[1]);
        int op = *argv[2];
        int b = atoi(argv[3]);
        int rezultat = a + b;
        printf("Rezultat je %d", rezultat);
    } else {
        printf("Pričakoval sem en argument");
    }
    
    int cifre[argv-1];
    
    if (argv-1 >= 1) {
        for (int i = 1; i < argc; i++) {
            cifre[i-1] = argv[i];
        }
        izpisArgumentovCifer(cifre, argc-1);
    }


    printf("%d", random());

    return 0;
}

void izpisArgumentovCifer(int stevila[], int n) {
    printf("Izpis cifer, ki so bile podane kot argumenti: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", stevila[i]);
    }
}

void funkcija() {
    int input;
    scanf("%d", &input);
    
    int dvakratnik = 2 * input;
    printf("Dvakratnik vnesenega števila %d je %d", input, dvakratnik);
}


int random() {
    return 4;
}


if (pogoj) {
    posledica;
}
else if (pogoj2) {
    posledica2;
} else {
    posledica3;
}


for (init;pogoj;sprememba spr. pogoj) {
    posledica;
}

while (pogoj) {
    posledica;
}

switch (var) {
    case 1:
        pos1;
        break;
    case 2:
        pos2;
        break;
    case 3:
        pos3;
        break;
    default:
        drugaPos;
        break; 
}

int polje[5];
int polje[12][2];

int x = 50;
int *kazalec;
kazalec = &x;


