#include<stdio.h>

int main() {

	int iBroj;
	int iSumaNeparnih = 0;
	int iSumaNeparnihDeljivihSa7 = 0;

	for (iBroj = 100;iBroj <= 154;iBroj++) {
		if (iBroj % 2 != 0) {
			iSumaNeparnih += iBroj;
			if (iBroj % 7 == 0) {
				iSumaNeparnihDeljivihSa7 += iBroj;
			}
		}
	}

	printf("Zbir neparnih brojeva u opsegu [100,154] je %d.", iSumaNeparnih);
	printf("\nZbir neparnih brojeva koji su deljivi sa sedam u opsegu [100,154] je %d.", iSumaNeparnihDeljivihSa7);




	return 0;
}