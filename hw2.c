#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {
	float kilo;
	printf("Please enter kilometers:");
	scanf("%f", &kilo);
	float mile;
	mile = kilo / 1.609;
	printf("%.1f km is equal to %.1f miles \n", kilo, mile);
	return 0;
}
