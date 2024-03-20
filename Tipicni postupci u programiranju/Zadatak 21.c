#include<stdio.h>

int main() {

	int aiNiz1[10] = { 12,3,8,90,150,18,75,11,9,28 };
	int aiNiz2[10] = { 62,6,37,23,88,47,43,8,59,81 };
	int iIndeks1, iIndeks2;
	int iSuma = 0;

	for (iIndeks1 = 0, iIndeks2 = 9;iIndeks1 <= 4 && iIndeks2 >= 5;iIndeks1++, iIndeks2--) {
		iSuma += (aiNiz1[iIndeks1] * aiNiz2[iIndeks2]);
	}

	printf("\nZbir je: %d.", iSuma);

	/*Kada koristim comma operator odn zarez u uslovu for petlje moze doci do ignorisanja jednog od uslova,
	pa je dobro koristiti logicke operatore.*/
	
	/*The comma operator evaluates all its operands and yields the value of the last one. 
	So basically whichever condition you write first, it will be disregarded, and the second one will be significant only.
	
	int i, j=2;
	for (i = 0; j >= 0, i <= 5; i++)
	
	is thus equivalent with
	
	int i, j=2;
	for (i = 0; i <= 5; i++)*/











	return 0;
}