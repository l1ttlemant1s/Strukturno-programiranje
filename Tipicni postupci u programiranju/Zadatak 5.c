#include <stdio.h>
#include <stdbool.h>

int main() {

	int iBroj;
	bool bUnetJeBroj = false;
	int iUnosBroja;

	for (iUnosBroja = 1;iUnosBroja > 0;iUnosBroja++) {
		printf("Unesite broj: ");
		scanf_s("%d", &iBroj);

		if (iBroj > 500 && iBroj % 5 == 0) {
			bUnetJeBroj = true;
		}

		if (iBroj == 0) {
			break;
		}


	}


	if (bUnetJeBroj == true) {
		printf("Unet je broj veci od 500 koji je deljiv sa brojem 5.");
	}
	else {
		printf("Nije unet broj veci od 500 koji je deljiv sa brojem 5.");

	}












	return 0;
}