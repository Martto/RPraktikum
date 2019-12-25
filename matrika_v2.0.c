#include <stdio.h>

int globalna = 0;

int vnos();
void izpis_matrike(int matrika[][globalna], int m, int n);

int main() {
	int v, s;
	printf("Vnesite stevilo vrstic (V) in stolpcev (S) matrike: ");
	scanf("%d %d", &v, &s);
    
    	if ((v < 0 || v >= 10) || (s < 0 || s >= 10)) {
		printf("Napaka: Podati morate pozitivni stevili vrstic in stolpcev, ki sta manjši od 10!\n");
		return 1;
	}

	int matrika[v][s];
	
	//vnos matrike
	for (int i = 0; i < v; i++) {
		for (int j = 0; j < s; j++) {
			printf("Vnesite element e%d%d: ", i+1, j+1);
            matrika[i][j] = vnos();
			
		}
	}

	printf("\n");

	//izpis matrike
	printf("Vnesena matrika: \n");
    	globalna = s;
    	izpis_matrike(matrika, v, s);
	printf("\n");

	//transponiranje matrike
	int transMatrika[s][v];

	for (int i = 0; i < v; i++) {
		for (int j = 0; j < s; j++) {
			transMatrika[j][i] = matrika[i][j];
		}
	}

	//izpis transponirane matrike
	printf("Transponirana matrika: \n");
    	globalna = v;
    	izpis_matrike(transMatrika, s, v);

	return 0;
}

int vnos() {
    int input;
    scanf("%d", &input);

    return input;
}

void izpis_matrike(int matrika[][globalna], int m, int n) {
    for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", matrika[i][j]);			
		}
		printf("\n");
	}
}
