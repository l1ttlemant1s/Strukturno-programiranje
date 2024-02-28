#include<stdio.h>

int main() {

	float fTroskoviStampanja, fUnosTeksta, fAutorskiHonorar, fNabavnaCena, fIznosMarze;
	float fIznosPDV, fUkupnaVrednost, fJedinicnaProdajaCena;
	int iTiraz, iProcenatMarze, iProcenatPDV;

	printf("Unesite iznos troskova stampanja:");
	scanf_s("%f", &fTroskoviStampanja);
	printf("Unesite iznos troskova unosa teksta:");
	scanf_s("%f", &fUnosTeksta);
	printf("Unesite procenat marze:");
	scanf_s("%d", &iProcenatMarze);
	printf("Unesite procenat PDV-a:");
	scanf_s("%d", &iProcenatPDV);
	printf("Unesite tiraz:");
	scanf_s("%d", &iTiraz);

	fAutorskiHonorar = fTroskoviStampanja * 35 / 100;
	fNabavnaCena = fTroskoviStampanja + fUnosTeksta + fAutorskiHonorar;
	fIznosMarze = fNabavnaCena * iProcenatMarze / 100;
	fIznosPDV = (fNabavnaCena + fIznosMarze) * iProcenatPDV / 100;
	fUkupnaVrednost = fNabavnaCena + fIznosMarze + fIznosPDV;
	fJedinicnaProdajaCena = fUkupnaVrednost / iTiraz;

	printf("---------------------------------------");
	printf("\nNabavna cena iznosi %f dinara", fNabavnaCena);
	printf("\nMarze iznosi %f dinara", fIznosMarze);
	printf("\nPDV iznosi %f dinara", fIznosPDV);
	printf("\nUkupna vrednost iznosi %f dinara", fUkupnaVrednost);
	printf("\nJedinicna prodajna cena iznosi %f dinara", fJedinicnaProdajaCena);

	return 0;
}