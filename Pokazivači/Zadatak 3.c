#include<stdio.h>

int main() {

	int iBroj;
	int* piPokazivacBroja = NULL;
	piPokazivacBroja = &iBroj;
	
	printf("Unesite broj: ");
	scanf_s("%d", &iBroj);

	if (*piPokazivacBroja % 2 == 0) {
		printf("Broj je paran.");

	}
	else {
		printf("Broj je neparan.");
	}













	return 0;
}