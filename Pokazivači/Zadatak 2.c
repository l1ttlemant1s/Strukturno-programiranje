#include<stdio.h>

int main() {

	int iStotine, iDesetice, iJedinice, iBroj;
	int* piStotine = &iStotine;
	int* piDesetice = &iDesetice;
	int* piJedinice = &iJedinice;

	printf("Unesite broj: ");
	scanf_s("%d", &iBroj);

	iStotine = iBroj / 100;
	iDesetice = (iBroj - iStotine * 100) / 10;
	iJedinice = iBroj - iStotine * 100 - iDesetice * 10;

	printf(" \n%d * 100 \n%d * 10 \n%d * 1", *piStotine,*piDesetice, *piJedinice);











	return 0;
}