#include<stdio.h>

int main() {

	float fPrviOperand, fDrugiOperand, fResenje;
	char cZnak;

	printf("Unesite +, -, * ili /:");
	scanf_s("%c" , &cZnak);
	printf("Unesite vrednost prvog operanda:");
	scanf_s("%f", &fPrviOperand);
	printf("Unesite vrednost drugog operanda:");
	scanf_s("%f", &fDrugiOperand);

	switch (cZnak) {

	case '+':
		fResenje = fPrviOperand + fDrugiOperand;
		printf("%f + %f = %f", fPrviOperand, fDrugiOperand, fResenje);
		break;
	case '-':
		fResenje = fPrviOperand - fDrugiOperand;
		printf("%f - %f = %f", fPrviOperand, fDrugiOperand, fResenje);
		break;
	case '*':
		fResenje = fPrviOperand * fDrugiOperand;
		printf("%f * %f = %f", fPrviOperand, fDrugiOperand, fResenje);
		break;
	case '/':
		fResenje = fPrviOperand / fDrugiOperand;
		printf("%f / %f = %f", fPrviOperand, fDrugiOperand, fResenje);
		break;

	}


	return 0;
}