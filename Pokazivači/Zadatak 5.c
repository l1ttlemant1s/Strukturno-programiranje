#include<stdio.h>

int main() {

	int iBroj;
	int* piPokazivac = NULL;
	piPokazivac = &iBroj;

	for (iBroj = 208;iBroj <= 215;iBroj++) {
		if (*piPokazivac % 5 != 0) {
			printf("\n%d", *piPokazivac);
		}
	}










	return 0;
}