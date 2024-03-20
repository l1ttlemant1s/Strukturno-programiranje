#include<stdio.h>

int main() {

	int aiNizBrojeva[10];
	int iIndeksBroja;
	int iIndeksMin = 0, iIndeksMax = 0;

	for (iIndeksBroja = 0;iIndeksBroja <= 9;iIndeksBroja++) {
		printf("Unesite %d. broj: ", iIndeksBroja + 1);
		scanf_s("%d", &aiNizBrojeva[iIndeksBroja]);

		if (aiNizBrojeva[iIndeksBroja] < aiNizBrojeva[iIndeksMin]) {
			iIndeksMin = iIndeksBroja;
		}
		if (aiNizBrojeva[iIndeksBroja] > aiNizBrojeva[iIndeksMax]) {
			iIndeksMax = iIndeksBroja;
		}

	}

	printf("\nNajmanji uneti broj je %d.", aiNizBrojeva[iIndeksMin]);
	printf("\nNajveci uneti broj je %d.", aiNizBrojeva[iIndeksMax]);


	return 0;
}