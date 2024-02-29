#include<stdio.h>

int main() {

	int iBroj;

	printf("Unesite jedan broj:");
	scanf_s("%d", &iBroj);

	if (iBroj == 0) {
		printf("Broj koji ste uneli nije ni paran ni neparan.");
	}
	else if (iBroj % 2 == 0) {
		printf("Uneli ste paran broj.");
	}
	else {
		printf("Broj koji ste uneli je neparan.");
	}


	return 0;
}