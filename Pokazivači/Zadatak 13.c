#include<stdio.h> 

int main() {

	int aiNiz[10];
	int* piPokazivac1 = NULL;
	int* piPokazivac2 = NULL;
	int iPovecanje;



	printf("Vrednost elementa sa indeksom 0 je: ");
	scanf_s("%d", &aiNiz[0]);

	printf("Povecanje je: ");
	scanf_s("%d", &iPovecanje);

	printf("\nIspis vrednosti elemenata niza");

	for (piPokazivac1 = &aiNiz[0],piPokazivac2 = &aiNiz[1];piPokazivac1 < aiNiz + 9;piPokazivac1++, piPokazivac2++) {
		*piPokazivac2 = *piPokazivac1 + iPovecanje;
	}

	for (piPokazivac1 = aiNiz;piPokazivac1 <= aiNiz + 9;piPokazivac1++) {
		printf("\nIndeks: %d  Vrednost: %d", (piPokazivac1 - aiNiz),*piPokazivac1);
	}
	






	return 0;
}