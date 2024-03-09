#include<stdio.h>

int main() {

	int iBroj;

	for (iBroj = 10;iBroj <= 217;iBroj++) {
		if (iBroj % 2 != 0) {
			continue;
		}
		if (iBroj % 3 == 0 && iBroj % 5 == 0) {
			printf("\n%d", iBroj);
		}
	}

	return 0;
}