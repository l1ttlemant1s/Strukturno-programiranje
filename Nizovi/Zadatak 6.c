#include<stdio.h>

int main() {

	int aiNiz[10], iIndeks;

	for (iIndeks = 0;iIndeks <= 4;iIndeks++) {
		printf("Unesite vrednost elementa sa indeksom %d: ", iIndeks);
		scanf_s("%d", &aiNiz[iIndeks]);
	}
	printf("\nVrednosti niza su: ");

	aiNiz[5] = aiNiz[0];
	aiNiz[6] = aiNiz[1] + aiNiz[3];
	aiNiz[7] = aiNiz[4] - aiNiz[2];
	aiNiz[8] = aiNiz[2] * aiNiz[7];
	aiNiz[9] = aiNiz[6] * 4;

	for (iIndeks = 0;iIndeks <= 9;iIndeks++) {
		printf("\n Indeks = %d  Vrednost = %d", iIndeks, aiNiz[iIndeks]);
	}









	return 0;
}