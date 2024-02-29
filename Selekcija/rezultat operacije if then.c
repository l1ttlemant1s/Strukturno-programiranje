#include<stdio.h>

int main() {

	char cOperator;
	float fOperand1, fOperand2, fRezultat;

	printf("Unesite operator +,-,*, ili /:");
	scanf_s(" %c", &cOperator);
	printf("Unesite vrednost prvog operanda:");
	scanf_s("%f", &fOperand1);
	printf("Unesite vrednost drugog operanda:");
	scanf_s("%f", &fOperand2);

	if (cOperator == '+') {
		fRezultat = fOperand1 + fOperand2;
		printf("%f + %f = %f", fOperand1, fOperand2, fRezultat);
	}
	else if (cOperator == '-') {
		fRezultat = fOperand1 - fOperand2;
		printf("%f - %f = %f", fOperand1, fOperand2, fRezultat);
	}
	else if (cOperator == '*') {
		fRezultat = fOperand1 * fOperand2;
		printf("%f * %f = %f", fOperand1, fOperand2, fRezultat);
	}
	else if (cOperator == '/') {
		fRezultat = fOperand1 / fOperand2;
		printf("%f / %f = %f", fOperand1, fOperand2, fRezultat);
	}

	return 0;
}