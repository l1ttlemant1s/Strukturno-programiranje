#include<stdio.h>

int main() {

	int iBroj, iStotine, iDesetice, iJedinice;

	printf("Unesite trocifreni broj:");
	scanf_s("%d", &iBroj);
	
	iStotine = iBroj / 100;
	iDesetice = (iBroj - 100 * iStotine) / 10;
	iJedinice = (iBroj - 100 * iStotine - 10 * iDesetice);

	if (iStotine == iJedinice) {
		printf("Uneti broj je palindrom.");
	}
	else {
		printf("Uneti broj nije palindrom.");
	}

	return 0;
}