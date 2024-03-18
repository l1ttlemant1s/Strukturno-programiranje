#include<stdio.h>

int main() {

	int iBroj;
	int iDelilac, iSuma = 0;

	printf("Unesite jedan ceo broj: ");
	scanf_s("%d", &iBroj);

	for (iDelilac = 1;iDelilac < iBroj;iDelilac++) {
		if (iBroj % iDelilac == 0) {
			iSuma += iDelilac;
		}
	}

	if (iSuma == iBroj) {
		printf("Broj %d je savrsen.", iBroj);
	}
	else {
		printf("Broj %d nije savrsen.", iBroj);
	}












	return 0;
}