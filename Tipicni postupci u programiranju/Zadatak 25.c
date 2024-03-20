#include<stdio.h>
#include<stdbool.h>

int main() {

	int aiNiz[10] = { 12,3,8,90,150,6,37,23,88,47 };
	int iIndeks;
	bool bSwap;

	do {
		bSwap = false;

		for (iIndeks = 0;iIndeks <= 8;iIndeks++) {
			if (aiNiz[iIndeks] > aiNiz[iIndeks + 1]) {
				int iPrivrem;

				iPrivrem = aiNiz[iIndeks];
				aiNiz[iIndeks] = aiNiz[iIndeks + 1];
				aiNiz[iIndeks + 1] = iPrivrem;
				bSwap = true;

			}
		}
	} while (bSwap);

	printf("\nSortirani niz:");
	
	for (iIndeks = 0;iIndeks <= 9;iIndeks++) {
		printf("\naiNiz[%d] = %d ", iIndeks, aiNiz[iIndeks]);
	}











	return 0;
}