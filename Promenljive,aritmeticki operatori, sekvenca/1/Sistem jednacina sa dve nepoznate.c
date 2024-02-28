#include<stdio.h>

int main() {

	float fA1, fB1, fR1;
	float fA2, fB2, fR2;
	float fX, fY;

	printf("Prva jednacina:");
	printf("\n----------------------------");

	printf("\nUnesite vrednost broja a1:");
	scanf_s("%f", &fA1);
	printf("Unesite vrednost broja b1:");
	scanf_s("%f", &fB1);
	printf("Unesite vrednost broja r1:");
	scanf_s("%f", &fR1);

	printf("Druga jednacina:");
	printf("\n----------------------------");

	printf("\nUnesite vrednost broja a2:");
	scanf_s("%f", &fA2);
	printf("Unesite vrednost broja b2:");
	scanf_s("%f", &fB2);
	printf("Unesite vrednost broja r2:");
	scanf_s("%f", &fR2);

	fY = (fR1 * fA2 - fR2 * fA1) / (fB1 * fA2 - fB2 * fA1);
	fX = (fR1 - fB1 * fY) / fA1;

	printf("x = %f i y = %f ", fX, fY);

	return 0;
}