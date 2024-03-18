#include<stdio.h>


int main() {

	int iBroj;
	int iDelilac;
	int iBrojac = 0;

	printf("Unesite jedan integer broj: ");
	scanf_s("%d", &iBroj);

	for (iDelilac = 1;iDelilac <= iBroj;iDelilac++) {
		if (iBroj % iDelilac == 0) {
			iBrojac++;
		}
	}

	if (iBrojac == 2) {
		printf("Broj %d je prost.", iBroj);
	}
	else {
		printf("Broj %d nije prost.", iBroj);
	}

	return 0;
}