#include<stdio.h>

int main() {

	int iBroj;

	for (iBroj = 208; iBroj <= 215; iBroj++) {
		if (iBroj % 5 == 0) {
			continue;
		}
		printf("\n%d", iBroj);
	}



	return 0;
}