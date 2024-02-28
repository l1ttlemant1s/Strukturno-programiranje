#include<stdio.h>

float abs(float x);

int main() {

	int iMinuti, iSati;
	float fUgaoVelikaI12; //Ugao izmedju velike kazaljke i 12 sati
	float fUgaoMalaI12; //Ugao izmedju male kazaljke i 12 sati
	float fUgaoVelikaIMala; //Ugao izmedju velike i male kazaljke
	float fKolikoJeVelikaProsla; //Koj deo sata je velika kazaljka prosla
	float fKolikoJeMalaProsla; //Koji deo sata je mala kazaljka prosla
	const int iMinutiUJednomSatu = 60;
	const int iStepeniKruga = 360;
	const int iStepenSata = 30; //Broj stepeni po jednom satu


	printf("Unesite tacan broj sati:");
	scanf_s("%d", &iSati);
	printf("Unesite tacan broj minuta:");
	scanf_s("%d", &iMinuti);

	fKolikoJeVelikaProsla = (float)iMinutiUJednomSatu / iMinuti;
	fUgaoVelikaI12 = (float)iStepeniKruga / fKolikoJeVelikaProsla;
	printf("\nUgao izmedju velike kazaljke i 12 na satu je %f", fUgaoVelikaI12);

	fKolikoJeMalaProsla = iStepenSata / fKolikoJeVelikaProsla;
	fUgaoMalaI12 = iStepenSata * iSati + fKolikoJeMalaProsla;
	printf("\nUgao izmedju male kazaljke i 12 na satu je %f", fUgaoMalaI12);

	fUgaoVelikaIMala = fUgaoVelikaI12 - fUgaoMalaI12;

	/*if (fUgaoVelikaIMala > 0) {

		printf("\nUgao izmedju velike i male je kazaljke je %f", fUgaoVelikaIMala);
	} 
	else {
		fUgaoVelikaIMala = fUgaoVelikaIMala * (-1);
		printf("\nUgao izmedju velike i male je kazaljke je %f", fUgaoVelikaIMala);
	}*/

	printf("\nUgao izmedju velike i male je kazaljke je %f", abs(fUgaoVelikaIMala));

	return 0;
}

float abs(float x) {
	if (x < 0) {
		x = x * (-1);
	}
	return x;
}