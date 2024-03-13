#include<stdio.h>

int main() {

	int iStotine, iDesetice, iJedinice, iTrocifrenBroj;
	int iInverzniBroj;

	for (iTrocifrenBroj = 100;iTrocifrenBroj >= 100 && iTrocifrenBroj < 999;iTrocifrenBroj++) {
		iStotine = iTrocifrenBroj / 100;
		iDesetice = (iTrocifrenBroj - iStotine * 100) / 10;
		iJedinice = iTrocifrenBroj - iStotine * 100 - iDesetice * 10;

		iInverzniBroj = iJedinice * 100 + iDesetice * 10 + iStotine;

		if (iTrocifrenBroj == iInverzniBroj * 12) {
			printf("\nBroj %d je 12 puta veci od svog inverznog zapisa.", iTrocifrenBroj);
		}

	}




	









	return 0;
}