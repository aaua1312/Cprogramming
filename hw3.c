#include<stdio.h>
int main(void) {
	int i;
	int k;
	for (i = 1; i <6; i++) {
		for (k = 5 - i; k > 0; k--) {
			printf(" ");
		}
		for (k = 1; k < 2*i ; k++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
