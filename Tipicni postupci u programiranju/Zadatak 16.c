#include<stdio.h>

int main() {

	int aiNiz[10] = { 12,3,8,90,150,6,37,23,88,47 };
	int iIndeks, iIndeksMin = 0;

	for (iIndeks = 1;iIndeks <= 9;iIndeks++) {
		if (aiNiz[iIndeks] < aiNiz[iIndeksMin]) {
			iIndeksMin = iIndeks;
		}
	}

	printf("\nIndeks elementa sa najmanjom vrednoscu je %d", iIndeksMin);
	printf("\nVrednost elementa sa najmanjom vrednoscu je %d", aiNiz[iIndeksMin]);







	return 0;
}