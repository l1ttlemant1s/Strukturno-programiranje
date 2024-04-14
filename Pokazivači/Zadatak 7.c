#include<stdio.h>

int main() {

	int iPin;
	int* piPokazivac = NULL;
	piPokazivac = &iPin;
	int iPrviBroj,iDrugiBroj = 2,iTreciBroj = 4,iCetvrtiBroj = 4, iPetiBroj;
	int iZbir;

	for ( iPetiBroj = 0; iPetiBroj <= 9;iPetiBroj++) {
		for (iPrviBroj = 1;iPrviBroj <= 9;iPrviBroj++) {
			iZbir = iPrviBroj * iPrviBroj + iDrugiBroj * iDrugiBroj + iTreciBroj * iTreciBroj + iCetvrtiBroj * iCetvrtiBroj + iPetiBroj * iPetiBroj;
			iPin = iPrviBroj * 10000 + iDrugiBroj * 1000 + iTreciBroj * 100 + iCetvrtiBroj * 10 + iPetiBroj;
			if (iPin % iZbir == 0) {
				printf("Pin je %d", *piPokazivac);
			}
		}
	}











	return 0;
}