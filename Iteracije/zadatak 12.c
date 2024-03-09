#include<stdio.h>

int main() {

	// promenljiva "a" oznacava broj redova
	// promenljiva "b" oznacava broj kolona
	// promenljiva "c" oznacava praznine


	/* 
	a)
	for (int a = 1;a<= 7;a++) {
		for (int b = 0;b < a;b++) {
			printf("*");
		}
		printf("\n");

	}*/

	/*
	 b)
	for (int a = 6; a >= 1;a--) {
		for (int b = 0; b < a; b++) {
			printf("*");
		}
		printf("\n");
	}*/

	/*
	 v)
	for (int a = 6; a >= 1; a--) {
		for (int b = 0; b < a;b++) {
			printf("*");
			
		}
		printf("\n");
		for (int c = 7; c > a;c--) {
			printf(" ");
		}
	}*/

	/*
	 g)
	for (int a = 1; a < 8; a++) {
		for (int c = 8; c > a;c--) {
			printf(" ");
		}
		for (int b = 0; b < a; b++) {
			printf("*");
		}
		printf("\n");
	}*/

	/*
	 d)
	for (int a = 1;a < 6;a++) {
		for (int b = 0;b < a;b++) {
			printf("*");
		}
		printf("\n");
	}
	for (int a = 4;a >= 1;a--) {
		for (int b = 0; b < a; b++) {
			printf("*");
		}
		printf("\n");
	}*/


	/*
	 dj)
	for (int a = 1; a <= 5; a++) {
		for (int c = 5; c > a; c--) {
			printf(" ");
		}
		
		for (int b = 0;b < a; b++) {
			printf("*");
		}
		printf("\n");
	}
	for (int a = 4;a > 0;a--) {
		for (int c = 5; c > a; c--) {
			printf(" ");
		}
		for (int b = 0; b < a; b++) {
			printf("*");
		}
		printf("\n");
	}*/

	/*
	e)
	for (int a = 0;a <= 5;a++) {
		for (int c = 0; c < a; c++) {
			printf(" ");
		}
		for (int b = 9; b > a+a; b-- ) {
			printf("*");
		}
		printf("\n");
	}*/
	
	/*
	 z)

	for (int a = 1;a <= 5;a++) {

		for (int c = 6; c > a; c--) {
		printf(" ");
		}
		for (int b = 1;b  <= a+a-1;b++) {
		printf("*");
		}
		printf("\n");
	}*/

	

	for (int a = 1;a <= 5;a++) {
		for (int c = 6;c > a;c--) {
		printf(" ");
		}
		for (int b = 1; b <= a + a - 1;b++) {
		printf("*");
		}
		printf("\n");
	}
	for (int a = 1;a <= 5;a++) {
		for (int c = 0;c <= a;c++) {
		printf(" ");
		}
		for (int b = 9;b > a + a; b--) {
		printf("*");
		}
		printf("\n");
	}
	









	return 0;
} 