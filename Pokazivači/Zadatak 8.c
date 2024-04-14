#include<stdio.h>

int main() {

	int aiNiz[5];
	int* piPokazivac1 = NULL;

	for (piPokazivac1 = aiNiz;piPokazivac1 <= aiNiz + 4;piPokazivac1++) {
		printf("Unesite vrednost broja sa indeksom %d: ", (piPokazivac1 - aiNiz));
		scanf_s("%d", piPokazivac1);
	}

	printf("\nIspis vrednosti elemenata niza\n");


	for (piPokazivac1 = aiNiz;piPokazivac1 <= aiNiz + 4;piPokazivac1++) {
		printf("\nVrednost elemenata ciji je indeks %d je %d.", (piPokazivac1 - aiNiz), *piPokazivac1);
	}









	return 0;
}