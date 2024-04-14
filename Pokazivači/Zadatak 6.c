#include<stdio.h>

int main() {

	int iBroj; 
	int* piPokazivac = NULL;
	piPokazivac = &iBroj;
	int iDelilac;

	printf("Unesite jedan integer broj: ");
	scanf_s("%d", &iBroj);

	for (iDelilac = 1;iDelilac <= *piPokazivac; iDelilac++) {
		if (*piPokazivac % iDelilac == 0) {
			printf("\nBroj %d je deljiv sa brojem %d.", *piPokazivac, iDelilac);
		}
	}










	return 0;
}