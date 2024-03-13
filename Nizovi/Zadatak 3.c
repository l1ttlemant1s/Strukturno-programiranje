#include<stdio.h>

int main() {

	int aiNiz[5], iIndeks;

	for (iIndeks = 0;iIndeks <= 4;iIndeks++) {
		printf("Unesite vrednosti elemenata sa indeksom %d: ", iIndeks);
		scanf_s("%d", &aiNiz[iIndeks]);
	}
	printf("\nIspis dvostrukih vrednosti niza");

	for (iIndeks = 0;iIndeks <= 4;iIndeks++) {
		printf("\n%d", aiNiz[iIndeks] * 2);
	}









	return 0;
}