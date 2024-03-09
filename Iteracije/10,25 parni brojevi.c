#include<stdio.h>

int main() {

	int iBroj;

	iBroj = 10;

	/*for (iBroj = 10;iBroj <= 25;iBroj++) {
		if (iBroj % 2 != 0) {
			continue;
		}
		printf("\n%d", iBroj);
	}*/
	
	/*Umesto dela sa if - om, mogli smo samo da stavimo 
	  da 3. izraz u betlji bude iBroj = iBroj + 2*/

	/*while (iBroj <= 25) {
		printf("\n%d", iBroj);
		iBroj += 2;
	}*/

	do {
		printf("\n%d", iBroj);
		iBroj += 2;
	} while (iBroj <= 25);

	return 0;
}