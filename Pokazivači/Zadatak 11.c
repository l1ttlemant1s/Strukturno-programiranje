#include<stdio.h>

int main() {

	int aiBrojevi[10] = { 5,8,1,3,9,4,6,7,15,2 };
	int* piPokazivac = NULL;

	for (piPokazivac = aiBrojevi;piPokazivac < aiBrojevi + 9;piPokazivac++) {
		if (*piPokazivac % 2 != 0) {
			*piPokazivac = 555;
		}

		printf("Indeks: %d  Vrednost: %d", (piPokazivac - aiBrojevi), *piPokazivac);
	}










	return 0;
}