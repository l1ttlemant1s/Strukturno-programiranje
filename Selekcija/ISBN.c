#include<stdio.h>

int main() {

	int iBroj1, iBroj2, iBroj3, iBroj4, iBroj5, iBroj6, iBroj7, iBroj8, iBroj9, iBroj10;
	int iZbir; //Zbir pomnozenih brojeva 
	int iOstatak; //Ostatak pri deljenju Zbira

	printf("Unesite prvi broj:");
	scanf_s("%d", &iBroj1);
	printf("Unesite drugi broj:");
	scanf_s("%d", &iBroj2);
	printf("Unesite treci broj:");
	scanf_s("%d", &iBroj3);
	printf("Unesite cetvrti broj:");
	scanf_s("%d", &iBroj4);
	printf("Unesite peti broj:");
	scanf_s("%d", &iBroj5);
	printf("Unesite sesti broj:");
	scanf_s("%d", &iBroj6);
	printf("Unesite sedmi broj:");
	scanf_s("%d", &iBroj7);
	printf("Unesite osmi broj:");
	scanf_s("%d", &iBroj8);
	printf("Unesite deveti broj:");
	scanf_s("%d", &iBroj9);
	printf("Unesite deseti broj:");
	scanf_s("%d", &iBroj10);

	iZbir = iBroj1 * 1 + iBroj2 * 2 + iBroj3 * 3 + iBroj4 * 4 + iBroj5 * 5 + iBroj6 * 6 + iBroj7 * 7 + iBroj8 * 8 + iBroj9 * 9;
	iOstatak = iZbir % 11;

	if (iOstatak == iBroj10) {
		printf("Uneti broj je ispravan ISBN broj.");
	}
	else {
		printf("Uneti broj nije ispravan ISBN broj.");
	}
	
	printf("Ostatak je %d", iOstatak); 
	return 0;
}