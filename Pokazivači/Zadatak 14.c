#include<stdio.h>

int main() {

	int aiNiz[10] = {12,3,8,90,150,6,37,23,88,47};
	int iSuma = 0;
	float fProsek;
	int* piPokazivac1 = NULL;
	int* piPokazivac2 = NULL;
	float* pfPokazivac3 = &fProsek;


	for (piPokazivac1 = aiNiz, piPokazivac2 = &iSuma;piPokazivac1 <= aiNiz + 9;piPokazivac1++) {
		*piPokazivac2 += *piPokazivac1;
	}

	*pfPokazivac3 = (float)iSuma / 10;

	printf("\nZbir: %d   \n Prosek: %.2f", *piPokazivac2, *pfPokazivac3);





	return 0;
}
