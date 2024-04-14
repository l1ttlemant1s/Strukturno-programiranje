#include<stdio.h>

int main() {

	int iPrviBroj, iDrugiBroj;
	int* piPokazivac1 = &iPrviBroj;
	int* piPokazivac2 = &iDrugiBroj;
	int iPrivrem;

	printf("Unesite vrednost prvog broja: ");
	scanf_s("%d", &iPrviBroj);

	printf("Unesite vrednost drugog broja: ");
	scanf_s("%d", &iDrugiBroj);

	iPrivrem = *piPokazivac1;
	*piPokazivac1 = *piPokazivac2;
	*piPokazivac2 = iPrivrem;

	printf("Posle zamene vrednosti: ");
	printf("\nPrvi broj je %d. \nDrugi broj je %d.", iPrviBroj, iDrugiBroj);

	return 0;
}