#include<stdio.h>

int main() {

	int iSatPolaska, iMinutiPolaska, iSekundePolaska;
	int iSatDolaska, iMinutiDolaska, iSekundeDolaska;
	int iPutUSekundama; //Duzina trajanja puta u sekundama
	int iSatiPutovanja, iMinutiPutovanja, iSekundePutovanja;


	printf("Unesite sat polaska:");
	scanf_s("%d", &iSatPolaska);
	printf("Unesite minute polaska:");
	scanf_s("%d", &iMinutiPolaska);
	printf("Unesite sekunde polaska:");
	scanf_s("%d", &iSekundePolaska);
	printf("Unesite duzinu trajanja puta u sekundama:");
	scanf_s("%d", &iPutUSekundama);

	iSatiPutovanja = (iPutUSekundama / 3600);
	iMinutiPutovanja = (iPutUSekundama - iSatiPutovanja * 3600) / 60;
	iSekundePutovanja = (iPutUSekundama - iSatiPutovanja * 3600 - iMinutiPutovanja * 60);

	iSatDolaska = iSatPolaska + iSatiPutovanja;
	iMinutiDolaska = iMinutiPolaska + iMinutiPutovanja;
	iSekundeDolaska = iSekundePolaska + iSekundePutovanja;

	if (iSekundeDolaska >= 60) {
		iSekundeDolaska -= 60;
		iMinutiDolaska += 1;
		if (iMinutiDolaska >= 60) {
			iMinutiDolaska -= 60;
			iSatDolaska += 1;
			if (iSatDolaska >= 24) {
				iSatDolaska -= 24;
			}
		}
		
	}
	else if (iMinutiDolaska >= 60) {
		iMinutiDolaska -= 60;
		iSatDolaska += 1;
		if (iSatDolaska >= 24) {
			iSatDolaska -= 24;
		}
	}
	else if (iSatDolaska >= 24) {
		iSatDolaska -= 24;
	}

	printf("Voz stize na odrediste u: %d h %d min %d sec.", iSatDolaska, iMinutiDolaska, iSekundeDolaska);

	return 0;
}