#include<stdio.h>

int main() {

	int aiNiz[10];
	int* piPokazivac = NULL;

	for (piPokazivac = aiNiz;piPokazivac <= aiNiz + 4;piPokazivac++) {
		printf("Unesite vrednost elementa sa indeksom %d:", (piPokazivac - aiNiz));
		scanf_s("%d", piPokazivac);
	}

	piPokazivac = aiNiz;

	aiNiz[5] = *piPokazivac;
	aiNiz[6] = *(piPokazivac + 1) + *(piPokazivac + 3);
	aiNiz[7] = *(piPokazivac + 4) - *(piPokazivac + 2);
	aiNiz[8] = *(piPokazivac + 2) * *(piPokazivac + 7);
	aiNiz[9] = *(piPokazivac + 6) * 4;

	for (piPokazivac = aiNiz;piPokazivac <= aiNiz + 9;piPokazivac++) {
		printf("\nIndeks: %d   Vrednost: %d", (piPokazivac - aiNiz), *piPokazivac);
	}






	return 0;
}