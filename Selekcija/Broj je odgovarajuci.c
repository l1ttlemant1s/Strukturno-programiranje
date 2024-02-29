#include<stdio.h>

int main() {

	int iBroj;

	printf("Unesite broj:");
	scanf_s("%d", &iBroj);

	if (iBroj < 500 || (iBroj > 1000 && iBroj <= 2000) || (iBroj % 2 == 0 && iBroj % 3 == 0)) {
		printf("Broj je odgovarajuci");
	}
	else {
		printf("Broj nije odgovarajuci.");
	}

	return 0;
}