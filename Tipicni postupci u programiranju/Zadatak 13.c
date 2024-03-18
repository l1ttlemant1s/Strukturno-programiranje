#include<stdio.h>

int main() {

	int iGodina, iRedniBrMeseca, iDan, iSumaDana = 0;
	int iBrojDanaUMesecu, iRedniBr;

	printf("Unesite godinu: ");
	scanf_s("%d", &iGodina);

	printf("Unesite redni broj meseca: ");
	scanf_s("%d", &iRedniBrMeseca);

	printf("Unesite dan: ");
	scanf_s("%d", &iDan);

	for (iRedniBr = 1;iRedniBr < iRedniBrMeseca;iRedniBr++) {
		if (iRedniBr == 1 || iRedniBr == 3 || iRedniBr == 5 || iRedniBr == 7 || iRedniBr == 8 || iRedniBr == 10 || iRedniBr == 12) {
			iBrojDanaUMesecu = 31;
		}
		else if (iRedniBr == 4 || iRedniBr == 6 || iRedniBr == 9 || iRedniBr == 11) {
			iBrojDanaUMesecu = 30;
		}
		else if (iRedniBr == 2) {
			if (iGodina % 400 == 0 || (iGodina % 4 == 0 && iGodina % 100 != 0)) {
				iBrojDanaUMesecu = 29;
			}
			else {
				iBrojDanaUMesecu = 28;
			}
		}
		iSumaDana += iBrojDanaUMesecu;

	}
	
	iSumaDana += iDan;

	printf("%d.%d.%d. je %d. dan u godini.", iDan, iRedniBrMeseca, iGodina, iSumaDana);










	return 0;
}