#include<stdio.h>
#include<stdbool.h>

int main() {

	int aiNiz[10] = { 12,3,8,90,150,6,37,23,88,47 };
	int iIndeks, iIndeksZaPoredjenje;
	bool bPostojeIstiBrojevi = false;

	for (iIndeks = 0;iIndeks <= 8;iIndeks++) {
		for (iIndeksZaPoredjenje = iIndeks + 1;iIndeksZaPoredjenje <= 9;iIndeksZaPoredjenje++) {
			if (aiNiz[iIndeks] == aiNiz[iIndeksZaPoredjenje]) {
				bPostojeIstiBrojevi = true;
				break;
			}
		}
	}

	if (bPostojeIstiBrojevi == true) {
		printf("\nPostoje bar 2 elementa cije su vrednosti identicne.");
	}
	else {
		printf("\nSvi elementi niza su razliciti.");
	}








	return 0;
}