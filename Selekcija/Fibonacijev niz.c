#include<stdio.h>

int main() {

	int iPrviClan, iDrugiClan, iRedniBrojTrazenogClana;
	int iRedniBrojClanova, iTrazenClan;

	printf("Unesite prvi clan niza: ");
	scanf_s("%d", &iPrviClan);

	printf("Unesite drugi clan niza: ");
	scanf_s("%d", &iDrugiClan);

	printf("Unesite redni broj clana Fibonacijevog niza: ");
	scanf_s("%d", &iRedniBrojTrazenogClana);

	for (iRedniBrojClanova = 2;iRedniBrojClanova < iRedniBrojTrazenogClana;iRedniBrojClanova++) {
		
		if (iRedniBrojClanova % 2 == 0) {
			iPrviClan = iPrviClan + iDrugiClan;
			iTrazenClan = iPrviClan;
		}
		else {
			iDrugiClan = iPrviClan + iDrugiClan;
			iTrazenClan = iDrugiClan;
		}
	}

	printf("\n%d. clan Fibonacijevog niza je broj %d. ", iRedniBrojTrazenogClana, iTrazenClan);














	return 0;
}
