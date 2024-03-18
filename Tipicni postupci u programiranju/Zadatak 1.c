#include<stdio.h>

int main() {

	int iBroj;
	int iBrojac = 0;

	for (iBroj = 1;iBroj <= 1000;iBroj++) {
		if (iBroj % 3 == 0 && iBroj % 7 == 0) {
			iBrojac++;
		}
	}

	printf("Ukupno ima %d brojeva deljivih sa 3 i 7", iBrojac);











	return 0;
}