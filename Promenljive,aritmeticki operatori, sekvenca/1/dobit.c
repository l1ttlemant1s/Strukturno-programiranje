#include<stdio.h>

int main() {

	float fDobit, fJedinicnaCena, fTroskoviPoJedinici;
	int iProdataKolicina, iProizvedenaKolicina;

	printf("Unesite prodatu kolicinu:");
	scanf_s("%d", &iProdataKolicina);
	printf("Unesite cenu po jedinici proizvoda:");
	scanf_s("%f", &fJedinicnaCena);
	printf("Unesite proizvedenu kolicinu:");
	scanf_s("%d", &iProizvedenaKolicina);
	printf("Unesite troskove po jedinici proizvoda:");
	scanf_s("%f", &fTroskoviPoJedinici);

	fDobit = (iProdataKolicina * fJedinicnaCena) - (iProizvedenaKolicina * fTroskoviPoJedinici);

	printf("Dobit iznosi %f dinara", fDobit);

	return 0;
}