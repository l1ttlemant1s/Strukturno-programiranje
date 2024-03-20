#include<stdio.h>

int main() {

	int aiNiz[10] = { 12,3,8,90,150,6,37,23,88,47 };
	int iIndeks, iIndeksMax = 0;

	for (iIndeks = 1;iIndeks <= 9;iIndeks++) {
		if (aiNiz[iIndeks] > aiNiz[iIndeksMax]) {
			iIndeksMax = iIndeks;
		}
	}

	printf("\nIndeks elementa sa najvecom vrednoscu je %d", iIndeksMax);
	printf("\nVrednos elementa sa najvecom vrednoscu je %d", aiNiz[iIndeksMax]);











	return 0;
}