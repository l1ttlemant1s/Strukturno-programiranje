#include<stdio.h>

int main() {

	int iBroj;

	printf("Unesite jedan broj u opsegu [0, 9999]");
	scanf_s("%d", &iBroj);

	if (iBroj >= 0 && iBroj <= 9) {
		printf("Broj je jednocifren.");
	}
	else if (iBroj >= 10 && iBroj <= 99) {
		printf("Broj je dvocifren.");
	}
	else if (iBroj >= 100 && iBroj <= 999) {
		printf("Broj je trocifren.");
	}
	else if (iBroj >= 1000 && iBroj <= 9999) {
		printf("Broj je cetvorocifren.");
	}



	return 0;
}