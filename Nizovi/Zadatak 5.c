#include<stdio.h>

int main() {

	int aiNiz[5], iIndeks;

	for (iIndeks = 0;iIndeks <= 4;iIndeks++) {
		printf("Unesite vrednost elementa sa indeksom %d: ", iIndeks);
		scanf_s("%d", &aiNiz[iIndeks]);
	}
	printf("\nIspis vrednosti elemenata niza: ");
	for (iIndeks = 0;iIndeks <= 4;iIndeks++) {
		if (iIndeks % 2 == 0) {
			aiNiz[iIndeks] *= 2;
			printf("\nIndeks: %d Vrednost %d", iIndeks, aiNiz[iIndeks]);
		}
		else {
			aiNiz[iIndeks] *= 3;
			printf("\nIndeks: %d Vrednost %d", iIndeks, aiNiz[iIndeks]);
		}
	}







	return 0;
}