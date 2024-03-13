#include<stdio.h>

int main() {

	int aiBrojevi[10] = { 5,8,1,3,9,4,6,7,15,2 };
	int iIndeks;
	int aiKopija[10];

	printf("Ispius vrednosti elemenata niza aiKopija:");

	for (iIndeks = 0; iIndeks <= 9; iIndeks++) {
		aiKopija[iIndeks] = aiBrojevi[iIndeks];
		printf("\nIndeks: %d  Vrednost: %d", iIndeks, aiKopija[iIndeks]);
	}

	return 0;
}