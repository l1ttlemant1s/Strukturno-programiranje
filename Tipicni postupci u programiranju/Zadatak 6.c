#include <stdio.h>
#include <stdbool.h>

int main() {

	int iBroj, iInverzanBroj;
	int iStotine, iDesetice, iJedinice;
	bool bPostojiBroj = false;

	for (iBroj = 100;iBroj <= 999;iBroj++) {
		iStotine = iBroj / 100;
		iDesetice = (iBroj - iStotine * 100) / 10;
		iJedinice = (iBroj - iStotine * 100 - iDesetice * 10);

		iInverzanBroj = iJedinice * 100 + iDesetice * 10 + iStotine;

		if (iBroj > iInverzanBroj * 8) {
			bPostojiBroj = true;
		}

	}

	if (bPostojiBroj == true) {
		printf("\nU opsegu [100,999] postoji broj koji je veci od osmostruke vrednosti svog inverzng zapisa");
	}
	else {
		printf("\nU opsegu [100,999] ne postoji broj koji je veci od osmostruke vrednosti svog inverzng zapisa");

	}















	return 0;
}