#include<stdio.h>

int main() {

	int iBroj;

	iBroj = 10;

	/*for (iBroj = 10;iBroj <= 25;iBroj++) {
		if (iBroj % 2 == 0) {
			continue;
			
		}
		printf("\n%d", iBroj);
	}*/

	/*while (iBroj <= 25) {
		iBroj++;
		if (iBroj % 2 == 0) {
			continue;	
		}
		printf("\n%d", iBroj);
		
	}*/

	do {
		iBroj++;
		if (iBroj % 2 == 0) {
			continue;
		} 
		printf("\n%d", iBroj);
	} while (iBroj <= 25);




	return 0;
}