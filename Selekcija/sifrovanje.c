#include<stdio.h>

int main() {

	int iBroj1, iBroj2, iBroj3, iBroj4;
	int iPrivremena; //Koristimo privremenu za zamenu vrednosti brojeva;
	int iSifrovanje;

	printf("Unesite 1 za sifrovanje i 2 za desifrovanje:");
	scanf_s("%d", &iSifrovanje);
	printf("Unesite prvi broj:");
	scanf_s("%d", &iBroj1);
	printf("Unesite drugi broj:");
	scanf_s("%d", &iBroj2);
	printf("Unesite treci broj:");
	scanf_s("%d", &iBroj3);
	printf("Unesite cetvrti broj:");
	scanf_s("%d", &iBroj4);


	if (iSifrovanje == 1) {

		iBroj1 = (iBroj1 + 7) % 10;
		iBroj2 = (iBroj2 + 7) % 10;
		iBroj3 = (iBroj3 + 7) % 10;
		iBroj4 = (iBroj4 + 7) % 10;

		iPrivremena = iBroj1;
		iBroj1 = iBroj3;
		iBroj3 = iPrivremena;

		iPrivremena = iBroj2;
		iBroj2 = iBroj4;
		iBroj4 = iPrivremena;

		printf("Sifrovani broj je %d%d%d%d", iBroj1, iBroj2, iBroj3, iBroj4);
	}
	else if (iSifrovanje == 2) {

		iPrivremena = iBroj4;
		iBroj4 = iBroj2;
		iBroj2 = iPrivremena;

		iPrivremena = iBroj3;
		iBroj3 = iBroj1;
		iBroj1 = iPrivremena;

		iBroj1 = (iBroj1 + 3) % 10;
		iBroj2 = (iBroj2 + 3) % 10;
		iBroj3 = (iBroj3 + 3) % 10;
		iBroj4 = (iBroj4 + 3) % 10;

		/*Kada smo sifrovali broj, dodali smo mu 7 i onda ga podelili sa 10 i uzeli njegov ostatak (odnosno iskoristili smo moduo). 
		A kada smo desivrovali, broju smo dodali 3 i onda iskoristili moduo da bi dobili pocetnu vredenost u vidu ostatka.
		Dodali smo bas 3 zato sto je 7 + 3 = 10. Znaci sifrovali smo, pocetnom broju (radi primera uzimam broj 1) smo dodali 7,
		(sada je vrednost 8), onda iskoristili moduo 10 (8 % 10 = 8) i time dobili sifrovan broj. Zatim smo sifrovan broj (8) desifrovali
		tako sto smo mu dodali 3 (sada je 8 + 3 = 11) i onda ponovo uradili moduo 10 (11 % 10 = 1) i dobili pocetni broj. Bukvalno je 
		vrednost neutralisana jer je ono sto smo dodali 10, a moduo od 10 je 0.*/

		printf("Desifrovani broj je %d%d%d%d", iBroj1, iBroj2, iBroj3, iBroj4);
	}


	return 0;
}