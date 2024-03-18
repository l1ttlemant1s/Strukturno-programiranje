#include <stdio.h>

int main() {

	int iBroj; 
	int iBrojac = 0;
	int iStotine, iDesetice, iJedinice;
	int iInverzniBr;

	

	for (iBroj = 100;iBroj <= 999;iBroj++) {
		iStotine = iBroj / 100;
		iDesetice = (iBroj - iStotine * 100) / 10;
		iJedinice = (iBroj - iStotine * 100 - iDesetice * 10);

		iInverzniBr = iJedinice * 100 + iDesetice * 10 + iStotine;

		if (iInverzniBr <= iBroj * 8) {
			iBrojac++;
		}
	}

	printf("Ukupno: %d", iBrojac);








	return 0;
}