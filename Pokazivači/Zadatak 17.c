#include<stdio.h>

int main() {

	int aiNiz1[10] = { 12,3,8,90,150,18,75,11,9,28 };
	int aiNiz2[10] = { 62,6,37,23,88,47,43,8,59,81 };
	int* piPokazivac1 = NULL;
	int* piPokazivac2 = NULL;
	int iSuma = 0;
	int* piPokazivac3 = &iSuma;

	for (piPokazivac1 = &aiNiz1[0], piPokazivac2 = &aiNiz2[9];piPokazivac1 <= aiNiz1 + 4 && piPokazivac2 >= aiNiz2 + 5;piPokazivac1++, piPokazivac2--) {
		*piPokazivac3 += (*piPokazivac1 * *piPokazivac2);
	}

	printf("Zbir: %d", *piPokazivac3);





	return 0;
}