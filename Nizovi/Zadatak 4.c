#include<stdio.h>

int main() {

	int aiNiz[5], iIndeks;

	for (iIndeks = 0;iIndeks <= 4;iIndeks++) {
		printf("Unesite vrednost elemenata sa indeksom %d: ", iIndeks);
		scanf_s("%d", &aiNiz[iIndeks]);
	}
	printf("\nIspis vrednosti vecih od 20:");
	for (iIndeks = 0;iIndeks <= 4;iIndeks++) {
		if (aiNiz[iIndeks] > 20) {
			printf("\n%d", aiNiz[iIndeks]);
		}
	}

	return 0;
}