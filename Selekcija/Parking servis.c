#include<stdio.h>

int main() {

	int iSatiParkiranja;
	int iIznosParkiranja;

	printf("Unesite broj sati parkiranja:");
	scanf_s("%d", &iSatiParkiranja);

	if (iSatiParkiranja == 1 || iSatiParkiranja == 2 || iSatiParkiranja == 3) {
		iIznosParkiranja = 120;
	}
	else if (iSatiParkiranja > 3) {
		iIznosParkiranja = 120 + (iSatiParkiranja - 3) * 50;
	}
	printf("Cena parkiranja za %d sati iznosi %d dinara.", iSatiParkiranja, iIznosParkiranja);
	
	return 0;
}