#include<stdio.h>

int main() {

	int iBroj;

	printf("Unesite broj:");
	scanf_s("%d", &iBroj);

	if (iBroj > 0) {
		printf("Broj koji ste uneli je pozitivan.");
	}
	else if (iBroj == 0) {
		printf("Broj koji ste uneli jednak je nuli.");
	}
	else {
		printf("Broj koji ste uneli je negativan.");
	}



	return 0;
}