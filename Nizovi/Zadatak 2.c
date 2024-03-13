#include<stdio.h>

int main() {

	int aiNiz[5], iIndeks;

	for (iIndeks = 0;iIndeks <= 4;iIndeks++) {
		printf("Unesite vrednost elementa sa indeksom %d: ", iIndeks);
		scanf_s("%d", &aiNiz[iIndeks]);
	}
	printf("\nIspis vrednosti elemenata niza");
	for (iIndeks = 4; iIndeks >= 0;iIndeks--) {
		printf("\nVrednos elementa ciji je indeks %d je %d.", iIndeks, aiNiz[iIndeks]);
	}










	return 0;
}