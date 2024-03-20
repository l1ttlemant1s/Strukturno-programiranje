#include<stdio.h>

int main() {

	int aiFibonaci[40];
	int iIndeks;
	float fSuma = 0;
	aiFibonaci[0] = 2;
	aiFibonaci[1] = 5;

	for (iIndeks = 2;iIndeks < 40;iIndeks++) {
		aiFibonaci[iIndeks] = aiFibonaci[iIndeks - 1] + aiFibonaci[iIndeks - 2];
		
		if (iIndeks % 2 != 0 && iIndeks > 20 && iIndeks % 7 == 0) {
			fSuma += aiFibonaci[iIndeks];

		}
	}

	printf("\nZbir: %.2f", fSuma);








	return 0;
}