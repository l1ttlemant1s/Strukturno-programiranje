#include<stdio.h>

int main() {

	float fBrojCentimetara;
	float fBrojInca;

	printf("Unesite broj centimetara:");
	scanf_s("%f", &fBrojCentimetara);

	fBrojInca = (fBrojCentimetara / 2.54);
	printf("\n%f cm = %f inch", fBrojCentimetara, fBrojInca);


	return 0;
}