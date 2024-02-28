#include<stdio.h>

int main() {

	float fIznosDinara, fKursEvra, fIznosEvra;
	
	printf("Unesite iznos dinara:");
	scanf_s("%f", &fIznosDinara);

	printf("Unesite iznos dinara potreban za 1 evro:");
	scanf_s("%f", &fKursEvra);

	fIznosEvra = fIznosDinara / fKursEvra;

	printf("%f RSD = %f EUR", fIznosDinara, fIznosEvra);

	return 0;
}