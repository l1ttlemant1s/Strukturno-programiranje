#include<stdio.h>
#include<stdbool.h>

int main() {

	int aiNiz[10] = { 12,3,8,90,150,6,37,23,88,47 };
	int* piPokazivac1 = NULL;
	int* piPokazivac2 = NULL;
	bool bSviSusedniElRazliciti = true;

	for (piPokazivac1 = &aiNiz[0], piPokazivac2 = &aiNiz[1];piPokazivac1 < aiNiz + 9;piPokazivac1++, piPokazivac2++) {
		if (*piPokazivac1 == *piPokazivac2) {
			bSviSusedniElRazliciti = false;
			break;
		}
	}

	if (bSviSusedniElRazliciti == false) {
		printf("Nisu svi susedni elementi niza razliciti.");
	}
	else {
		printf("Svi susedni elementi niza su razliciti.");
	}






	return 0;
}