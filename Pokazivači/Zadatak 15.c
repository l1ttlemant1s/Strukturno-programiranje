#include<stdio.h>

int main() {

	int aiNiz[10] = { 12,3,8,90,150,6,37,23,88,47 };
	int* piPokazivac1 = NULL;
	int* piPokazivac2 = NULL;

	for (piPokazivac1 = &aiNiz[0], piPokazivac2 = &aiNiz[1];piPokazivac2 <= aiNiz + 9; piPokazivac2++) {
		if (*piPokazivac1 < *piPokazivac2) {
			piPokazivac1 = piPokazivac2;
		}
	}

	printf("\nIndeks elementa sa najvecom vrednoscu je: %d   \nVrednost elementa sa najvecom vrednoscu je: %d",piPokazivac1 - aiNiz ,*piPokazivac1);






	return 0;

}