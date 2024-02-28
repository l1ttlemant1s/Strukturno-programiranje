#include<stdio.h>

int main() {

	float fStopaDividende, fStopaRastaDividende, fStopaPrinosa; //Stopa prinosa na akcijski kapital
	int iNominalnaVrAkcije; //Nominalna vrednost akcije
	int iStopaReinvestiranja, iPlaniranaStopaNetoDobiti; 
	int  iOcekivanaDividenda; //Ocekivana dividenda nakon godinu dana

	printf("Unesite nominalnu vrednost akcije:");
	scanf_s("%d", &iNominalnaVrAkcije);
	printf("Unesite stopu reinvestiranja:");
	scanf_s("%d", &iStopaReinvestiranja);
	printf("Unesite ocekivanu dividendu nakon godinu dana:");
	scanf_s("%d", &iOcekivanaDividenda);
	printf("Unesite planiranu stopu neto dobiti:");
	scanf_s("%d", &iPlaniranaStopaNetoDobiti);

	fStopaDividende = iNominalnaVrAkcije / iOcekivanaDividenda;
	fStopaRastaDividende = ((float)iStopaReinvestiranja * iPlaniranaStopaNetoDobiti) / 100;
	fStopaPrinosa = fStopaDividende + fStopaRastaDividende;

	printf("\nStopa dividende je %f %", fStopaDividende);
	printf("\nStopa rasta dividende je %f %", fStopaRastaDividende);
	printf("\nStopa prinosa na akcijski kapital je %f %", fStopaPrinosa);





	return 0;
}