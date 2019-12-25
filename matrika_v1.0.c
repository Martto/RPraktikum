#include <stdio.h>

int main() {
	int v, s;
	printf("Vnesite stevilo vrstic (V) in stolpcev (S) matrike: ");
	scanf("%d %d", &v, &s);
	int matrika[v][s];

	if ((v < 0 || v >= 10) || (s < 0 || s >= 10)) {
		printf("Napaka: Podati morate pozitivni stevili vrstic in stolpcev, ki sta manjši od 10!\n");
		return 1;
	}
	
	//vnos matrike
	for (int i = 0; i < v; i++) {
		for (int j = 0; j < s; j++) {
			printf("Vnesite element e%d%d: ", i+1, j+1);
			scanf("%d", &matrika[i][j]);
			
		}
	}

	printf("\n");

	//izpis matrike
	printf("Vnesena matrika: \n");
	for (int i = 0; i < v; i++) {
		for (int j = 0; j < s; j++) {
			printf("%d ", matrika[i][j]);			
		}
		printf("\n");
	}
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
	for (int i = 0; i < s; i++) {
		for (int j = 0; j < v; j++) {
			printf("%d ", transMatrika[i][j]);			
		}
		printf("\n");
	}

	return 0;
}
