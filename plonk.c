#include <stdio.h>

void funkcija();
int random();

int main(int argc, char *argv[]) {
    ukazi;
    
    if (argc == 2) {
        printf("Argument je %s", argv[1]);
    }
    else if (argc > 2) {
        printf("Preveč argumentov");
    } else {
        printf("Pričakoval sem en argument");
    }


    printf("%d", random());

    return 0;
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


