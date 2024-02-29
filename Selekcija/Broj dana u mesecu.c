#include<stdio.h>
#include<stdbool.h>

int main() {

	int iRedniBrojMeseca;
	int iBrojDanaUMesecu;
	int iOdgovor;

	printf("Unesite redni broj meseca:");
	scanf_s("%d", &iRedniBrojMeseca);

	if (iRedniBrojMeseca >= 1 && iRedniBrojMeseca <= 12) {

		if (iRedniBrojMeseca == 1 || iRedniBrojMeseca == 3 || iRedniBrojMeseca == 5 || iRedniBrojMeseca == 7 || iRedniBrojMeseca == 8 || iRedniBrojMeseca == 10 || iRedniBrojMeseca == 12) {
			iBrojDanaUMesecu = 31;
		}
		else if (iRedniBrojMeseca == 4 || iRedniBrojMeseca == 6 || iRedniBrojMeseca == 9 || iRedniBrojMeseca == 11) {
			iBrojDanaUMesecu = 30;
		}
		else if (iRedniBrojMeseca == 2) {
			printf("Da li je godina prestupna? Upisite 1 za da ili 0 za ne:");
			scanf_s("%d", &iOdgovor);
			if (iOdgovor == 1) {
				iBrojDanaUMesecu = 29;
			}
			else {
				iBrojDanaUMesecu = 28;
			}
		}

		printf("U %d. mesecu ima %d dan(a).", iRedniBrojMeseca, iBrojDanaUMesecu);
	}
	else {
		printf("Uneli ste redni broj meseca koji ne postoji.");
	}


	return 0;
}