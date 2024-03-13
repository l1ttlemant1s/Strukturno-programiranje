#include<stdio.h>

int main() {

	int aiNiz[10];
	int iIndeks;
	int iBroj;
	int iPovecanje;

	printf("Unesite vrednost elementa sa indeksom 0: ");
	scanf_s("%d", &iBroj);

	printf("Broj se povecava za: ");
	scanf_s("%d", &iPovecanje);

	printf("\nIspis vrednosti elemenata niza: ");

	aiNiz[0] = iBroj;
	printf("\n Indeks: 0  Vrednost: %d", aiNiz[0]);

	for (iIndeks = 1;iIndeks <= 9;iIndeks++) {
		iBroj += iPovecanje;
		aiNiz[iIndeks] = iBroj;
		printf("\n Indeks: %d  Vrednost: %d", iIndeks, aiNiz[iIndeks]);
	}

	return 0;
}