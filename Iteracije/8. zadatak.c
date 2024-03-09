#include<stdio.h>

int main() {

	int iBroj, iResenje, iDelilac;

	printf("Unesite jedan broj:");
	scanf_s("%d", &iBroj);

	for (iDelilac = 1;iDelilac <= iBroj;iDelilac++) {
		if (iBroj % iDelilac != 0) {
			continue;
		}
		iResenje = iBroj % iDelilac;
		printf("\nBroj %d je deljiv sa %d.", iBroj, iDelilac);
	}

	return 0;
}