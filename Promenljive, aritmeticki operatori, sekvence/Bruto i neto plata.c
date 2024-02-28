#include<stdio.h>

int main() {

	int iBrojCasovaRada; //Ostvaren broj casova rada
	int iCena1CasaRada, iCena1CasaPrekovremenogRada;
	int iBrojPrekovremenihSati; //Ostvaren broj sati prekovremenog rada
	int iRadniStaz; //Broj godina radnog staza
	int iProcenatPIO, iProcenatZO; //Procenti osiguranja
	float fBrutoPlata, fIznosPio, fIznosZdravstvenoOsiguranje, fNetoPlata;

	printf("Unesite broj casova rada:");
	scanf_s("%d", &iBrojCasovaRada);
	printf("Unesite cenu jednog casa rada:");
	scanf_s("%d", &iCena1CasaRada);
	printf("Unesite ostvaren broj sati prekovremenog rada:");
	scanf_s("%d", &iBrojPrekovremenihSati);
	printf("Unesite cenu jednog prekovremenog sata rada:");
	scanf_s("%d", &iCena1CasaPrekovremenogRada);
	printf("Unesite broj godina radnog staza:");
	scanf_s("%d", &iRadniStaz);
	printf("Unesite procenat poreskog i invalidskog osiguranja:");
	scanf_s("%d", &iProcenatPIO);
	printf("Unesite procenat zdravstvenog osiguranja:");
	scanf_s("%d", &iProcenatZO);

	fBrutoPlata = (iBrojCasovaRada * iCena1CasaRada) + (iBrojPrekovremenihSati * iCena1CasaPrekovremenogRada) + (iRadniStaz * 500);
	fIznosPio = fBrutoPlata * iProcenatPIO / 100;
	fIznosZdravstvenoOsiguranje = fBrutoPlata * iProcenatZO / 100;
	fNetoPlata = fBrutoPlata - fIznosPio - fIznosZdravstvenoOsiguranje;

	printf("\nIznos bruto plate je %f", fBrutoPlata);
	printf("\nIznos neto plate je %f", fNetoPlata);
	printf("\nIznos poreskog i invalidskog osiguranja je %f", fIznosPio);
	printf("\nIznos zdravstvenog osiguranja je %f", fIznosZdravstvenoOsiguranje);

	return 0;
}