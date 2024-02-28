#include<stdio.h>

int main() {

	int iPrviBroj;
	int iDrugiBroj;
	int iPrivremenaVrednost;

	printf("Unesite prvi broj:");
	scanf_s("%d", & iPrviBroj);

	printf("Unesite drugi broj:");
	scanf_s("%d", & iDrugiBroj);

	iPrivremenaVrednost = iPrviBroj;
	iPrviBroj = iDrugiBroj;
	iDrugiBroj = iPrivremenaVrednost;


	printf("\nPosle zamene vrednosti:");
	printf("\nPrvi broj je %d", iPrviBroj);
	printf("\nDrugi broj je %d", iDrugiBroj);
	 

	return 0;

}