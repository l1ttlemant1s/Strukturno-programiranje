#include<stdio.h>

int main() {

	int iBroj, iStotine, iDesetice, iJedinice, iZbirKubova;

	printf("Unesite broj:");
	scanf_s("%d", &iBroj);
	
	iStotine = iBroj / 100;
	iDesetice = (iBroj - iStotine * 100) / 10;
	iJedinice = iBroj - iStotine * 100 - iDesetice * 10;
	iZbirKubova = (iStotine * iStotine * iStotine) + (iDesetice * iDesetice * iDesetice) + (iJedinice * iJedinice * iJedinice);

	if (iBroj == iZbirKubova) {
		printf("Broj %d je Armstrongov broj.", iBroj);
	}
	else {
		printf("Broj %d nije Armstrongov broj.", iBroj);
	}

	return 0;
}