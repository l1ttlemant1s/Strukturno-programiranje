#include<stdio.h>
#include<stdbool.h>

int main() {

	int aiNiz[10] = { 12,3,8,90,150,6,37,23,88,37 };
	int iIndeks;
	bool bSusedniElementiSuIsti = false;

	for (iIndeks = 0;iIndeks <= 9;iIndeks++) {
		if (aiNiz[iIndeks] == aiNiz[iIndeks + 1]) {
			bSusedniElementiSuIsti = true;
			break;
		}
	}

	if (bSusedniElementiSuIsti == true) {
		printf("\nPostoje susedni elementi sa istim vrednostima.");
	}
	else {
		printf("\nSvi susedni elementi su razliciti. ");
	}











	return 0;
}