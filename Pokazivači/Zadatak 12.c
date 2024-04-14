#include<stdio.h>

int main() {

	int aiBrojevi[10] = { 5,8,1,3,9,4,6,7,15,2 };
	int aiKopija[10];
	int* piPokazivac = NULL;
	int* piPokazivac1 = aiKopija;

	printf("\nIspis vrednosti elemenata niza aiKopija");

	for (piPokazivac = aiBrojevi;piPokazivac <= aiBrojevi + 9;piPokazivac++, piPokazivac1++ ) {
		*piPokazivac1 = *piPokazivac;
		
	}


	for (int iIndeks = 0;iIndeks <= 9;iIndeks++) {
		printf("\nIndeks: %d  Vrednost: %d ", iIndeks, aiKopija[iIndeks]);
	}







	return 0;
}