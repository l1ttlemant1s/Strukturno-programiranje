#include<stdio.h>

int main() {

	int iPIN, iPrvaCifra, iPetaCifra, iZbir;
	int iDrugaCifra;
	int iTrecaCifra;
	int iCetvrtaCifra;

	
	
	for (iPetaCifra = 0, iDrugaCifra = 2, iTrecaCifra = 4, iCetvrtaCifra = 4;iPetaCifra <= 9;iPetaCifra++) {
		for (iPrvaCifra = 1; iPrvaCifra <= 9;iPrvaCifra++) {
			
			iPIN = iPrvaCifra * 10000 + iDrugaCifra * 1000 + iTrecaCifra * 100 + iCetvrtaCifra * 10 + iPetaCifra;
			iZbir = iPrvaCifra * iPrvaCifra + 2 * 2 + 4 * 4 + 4 * 4 + iPetaCifra * iPetaCifra;

			if (iPIN % iZbir != 0) {
				continue;
			}
			printf("PIN je %d", iPIN);
		}
		
	}
	
	











	return 0;
}