#include<stdio.h>

int main() {


	for (int iTacnaTeorijska = 0; iTacnaTeorijska <= 25;iTacnaTeorijska++) {
		for (int iTacnaPrakticna = 0;iTacnaPrakticna <= (25 - iTacnaTeorijska);iTacnaPrakticna++) {
			for (int iNetacna = 0;iNetacna <= (25 - iTacnaTeorijska - iTacnaPrakticna); iNetacna++) {
				if (iTacnaTeorijska + iTacnaPrakticna + iNetacna == 25) {
					if ((iTacnaTeorijska * 15 + iTacnaPrakticna * 33 - iNetacna * 10) == 430) {
						printf("\nStudent A je skupio 430 poena na sledeci nacin: ");
						printf("\nBroj prakticnih pitanja na koje je tacno odgovorio je %d", iTacnaPrakticna);
						printf("\nBroj teorijskih pitanja na koje je tacno odgovorio je %d", iTacnaTeorijska);
						printf("\nBroj pitanja na koje je netacno odgovorio je %d", iNetacna);

					}

					if ((iTacnaTeorijska * 15 + iTacnaPrakticna * 33 - iNetacna * 10) == 484) {
						printf("\nStudent B je skupio 484 poena na sledeci nacin: ");
						printf("\nBroj prakticnih pitanja na koje je tacno odgovorio je %d", iTacnaPrakticna);
						printf("\nBroj teorijskih pitanja na koje je tacno odgovorio je %d", iTacnaTeorijska);
						printf("\nBroj pitanja na koje je netacno odgovorio je %d", iNetacna);

					}

					if ((iTacnaTeorijska * 15 + iTacnaPrakticna * 33 - iNetacna * 10) == 426) {
						printf("\nStudent C je skupio 426 poena na sledeci nacin: ");
						printf("\nBroj prakticnih pitanja na koje je tacno odgovorio je %d", iTacnaPrakticna);
						printf("\nBroj teorijskih pitanja na koje je tacno odgovorio je %d", iTacnaTeorijska);
						printf("\nBroj pitanja na koje je netacno odgovorio je %d", iNetacna);

					}
				}
			}
		}
	}









	return 0;
}