#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
TwoJinsoo(int num1) {
	if (num1 == 0)
		return;
	TwoJinsoo(num1 / 2);
	printf("%d", num1%2);
}
int main(void) {
	int num2;
	printf("Please enter a number: ");
	scanf("%d", &num2);

	if (num2 == 0) {
		printf("0");
	}
	else {
		TwoJinsoo(num2); 
	}
	return 0;
}
