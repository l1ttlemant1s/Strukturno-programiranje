#include<stdio.h>

int main() {

	int iBroj;
	int iRedniBroj = 1;

	for (iBroj = 200;iBroj <= 2500;iBroj++) {
		if (iRedniBroj == 11) {
			break;
		}
		
		if (iBroj % 5 == 0 && iBroj % 7 == 0) {
			printf("\n%d. broj je %d", iRedniBroj++, iBroj);

		}
		

	}















	return 0;
}