#include<stdio.h>

int main() {

	int iTrocifreniBroj;
	int iStotine;
	int iDesetice;
	int iJedinice;

	printf("Unesite trocifreni broj:");
	scanf_s("%d", &iTrocifreniBroj);

	iStotine = iTrocifreniBroj / 100;
	iDesetice = (iTrocifreniBroj - 100 * iStotine) / 10;
	iJedinice = iTrocifreniBroj % 10;

	printf("\n%d * 100", iStotine);
	printf("\n%d * 10", iDesetice);
	printf("\n%d * 1", iJedinice);


	return 0;
}