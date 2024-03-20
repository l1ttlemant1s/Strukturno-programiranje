#include<stdio.h>

int main() {


	int aiNiz[10] = { 12,3,8,90,150,6,37,23,88,47 };
	int iIndeks;
	int iIndeksPodNiza;

	for (iIndeks = 0; iIndeks <= 9; iIndeks++) {

		int iIndeksMin = iIndeks;
		for (iIndeksPodNiza = iIndeks + 1;iIndeksPodNiza <= 9;iIndeksPodNiza++) {
			if (aiNiz[iIndeksPodNiza] < aiNiz[iIndeksMin]) {
				iIndeksMin = iIndeksPodNiza;
			}
		}

		if (iIndeksMin != iIndeks) {
			int iPrivrem;
			iPrivrem = aiNiz[iIndeks];
			aiNiz[iIndeks] = aiNiz[iIndeksMin];
			aiNiz[iIndeksMin] = iPrivrem;
		}
	}

	printf("\nSortirani niz:");
	for (iIndeks = 0;iIndeks <= 9;iIndeks++) {
		printf("\naiNiz[%d] = %d", iIndeks, aiNiz[iIndeks]);
	}

	return 0;
}