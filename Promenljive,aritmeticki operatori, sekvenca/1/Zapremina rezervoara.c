#include<stdio.h>

int main() {

	int iZapreminaRezervoara;
	float fProsecnaPotrosnja;
	float fPredjenaRazdaljina;

	printf("Unesite zapreminu rezervoara automobila (u litrima):");
	scanf_s("%d", &iZapreminaRezervoara);

	printf("/nUnesite prosecnu potrosnju u litrima na 100 kilometara:");
	scanf_s("%f", &fProsecnaPotrosnja);

	fPredjenaRazdaljina = (iZapreminaRezervoara / fProsecnaPotrosnja * 100);
	printf("Uz prosecnu potrosnju od %f litara/100 km automobil moze da predje %f", fProsecnaPotrosnja, fPredjenaRazdaljina);


	return 0;
}