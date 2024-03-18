#include<stdio.h>

int main() {

	int iBroj;
	int iBrojZaJedanManji;
	int iFaktorijel;

	printf("Unesite integer broj: ");
	scanf_s("%d", &iBroj);

	iFaktorijel = iBroj;

	for (iBrojZaJedanManji = iBroj - 1;iBrojZaJedanManji > 0;iBrojZaJedanManji--) {
		iFaktorijel *= iBrojZaJedanManji;
	}

	printf("Faktorijel broja %d je %d.", iBroj, iFaktorijel);


	





	return 0;
}