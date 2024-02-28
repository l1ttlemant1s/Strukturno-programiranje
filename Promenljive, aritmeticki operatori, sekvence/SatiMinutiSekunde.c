#include<stdio.h>

int main() {

	const int iBrojSekundiUSatu = 3600;
	const int iBrojSekundiUMinutu = 60;
	int iBrojSekundi, iBrojMinuta, iBrojSati;

	printf("Unesite broj sekundi:");
	scanf_s("\n%d", &iBrojSekundi);

	iBrojSati = iBrojSekundi / iBrojSekundiUSatu;
	iBrojMinuta = (iBrojSekundi - iBrojSekundiUSatu * iBrojSati) / iBrojSekundiUMinutu;
	iBrojSekundi = iBrojSekundi - iBrojSekundiUSatu * iBrojSati - iBrojSekundiUMinutu * iBrojMinuta;

	printf("%d h %d min %d sec", iBrojSati, iBrojMinuta, iBrojSekundi);

	return 0;
}