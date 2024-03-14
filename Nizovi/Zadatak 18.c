#include<stdio.h>

int main() {

	int aiMatrica[3][2][2] = { { {10,20} , {30,40} }, {{1,2}, {3,4} }};
	int iRed, iKolona;

	for (iRed = 0;iRed <= 1;iRed++) {
		for (iKolona = 0;iKolona <= 1;iKolona++) {
			aiMatrica[2][iRed][iKolona] = aiMatrica[0][iRed][iKolona] + aiMatrica[1][iRed][iKolona];
			printf("\nIndeks reda: %d  Indeks kolona: %d  Vrednost zbira: %d", iRed, iKolona, aiMatrica[2][iRed][iKolona]);
		}
	}
















	return 0;
}