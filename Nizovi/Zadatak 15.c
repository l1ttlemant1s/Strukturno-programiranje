#include<stdio.h>

int main() {

	int aiMatrica[2][2];
	int iRed, iKolona;
	int aiAdjungovanaMatrica[2][2];

	for (iRed = 0;iRed <= 1;iRed++) {
		for (iKolona = 0;iKolona <= 1;iKolona++) {
			printf("Red: %d  Kolona: %d  Vrednost: ", iRed,iKolona);
			scanf_s("%d", &aiMatrica[iRed][iKolona]);
		}
	}

	printf("\nAdjungovana matrica:");

	aiAdjungovanaMatrica[0][0] = aiMatrica[1][1];
	aiAdjungovanaMatrica[0][1] = aiMatrica[0][1] * (-1);
	aiAdjungovanaMatrica[1][0] = aiMatrica[1][0] * (-1);
	aiAdjungovanaMatrica[1][1] = aiMatrica[0][0];

	for (iRed = 0;iRed <= 1;iRed++) {
		for (iKolona = 0;iKolona <= 1;iKolona++) {
			printf("\nRed: %d  Kolona: %d  Vrednost: %d ", iRed, iKolona, aiAdjungovanaMatrica[iRed][iKolona]);
		}
	}

	return 0;
}