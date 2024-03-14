#include<stdio.h>

int main() {

	int aiMatricaA[2][2] = {10,20,30,40};
	int aiMatricaB[2][2] = {1,2,3,4};
	int iRed, iKolona;

	for (iRed = 0;iRed <= 1;iRed++) {
		for (iKolona = 0;iKolona <= 1;iKolona++) {
			aiMatricaA[iRed][iKolona] += aiMatricaB[iRed][iKolona];
			printf("\nIndeks reda: %d  Indeks kolone: %d  Vrednost zbira: %d", iRed, iKolona, aiMatricaA[iRed][iKolona]);
		}
	}

	/*Da ne bih dodavala novi niz, vrednost zbira matrica je smestena u niz aiMatricaA*/











	return 0;
}