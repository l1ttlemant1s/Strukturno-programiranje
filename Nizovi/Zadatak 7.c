#include<stdio.h>

int main() {

	int aiBrojevi[10] = { 5,8,1,3,9,4,6,7,15,2 };
	int iIndeks;

	for (iIndeks = 0; iIndeks < 9; iIndeks++) {
		if (aiBrojevi[iIndeks] < aiBrojevi[iIndeks + 1]) {
			continue;
		}
		printf("\nIndeks: %d  Vrednost: %d", iIndeks, aiBrojevi[iIndeks]);
	}















	return 0;
}