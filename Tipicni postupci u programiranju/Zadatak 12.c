#include<stdio.h>
#include<stdbool.h>

int main() {

	int iBroj, iBrojac = 0, iSuma = 0, iDelilac;
	float fProsek;
	

	for (iBroj = 10;iBroj <= 50;iBroj++) {
		bool bDeljiv = false;
		for(iDelilac = 2;iDelilac < iBroj;iDelilac++) {
			if (iBroj % iDelilac == 0) {
				bDeljiv = true;
				break;
			}
			
		}
		if (bDeljiv == true) {
			continue;
		}
		else {
			iBrojac++;
			iSuma += iBroj;
			printf("\nBroj %d je prost broj.", iBroj);
		}

	}

	fProsek = (float)iSuma / iBrojac;

	printf("\nUkupan broj prostih brojeva u opsegu [10,50] je %d.", iBrojac);
	printf("\nNjihova suma je %d, a prosecna vrednost je %.2f", iSuma, fProsek);










	return 0;
}