#include<stdio.h>

int main() {

	int iBroj, iApsolutanBroj;

	printf("Unesite jedan broj:");
	scanf_s("%d", &iBroj);

	if (iBroj < 0) {
		iApsolutanBroj = iBroj * (-1);
	}
	else {
		iApsolutanBroj = iBroj;
	}
	printf("Apsolutna vrednost broja %d je broj %d", iBroj, iApsolutanBroj);
	

	return 0;
}