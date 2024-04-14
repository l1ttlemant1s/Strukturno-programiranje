#include<stdio.h>

int main() {

	int iGodina;
	int* piPokazivac = NULL;
	piPokazivac = &iGodina;

	printf("Unesite godinu: ");
	scanf_s("%d", &iGodina);

	if ((*piPokazivac % 4 == 0 && *piPokazivac % 100 != 0) || *piPokazivac % 400 == 0) {
		printf("\n%d godina je prestupna.", *piPokazivac);
	}
	else {
		printf("\n%d godina nije prestupna.", *piPokazivac);
	}







	return 0;

}