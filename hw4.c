#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {
    int n, i;
    int t = 1;
    printf("Please enter a number: ");
    scanf("%d", &n);
    if (n <= 1) {
        t = 0;
    }
    else {
        for (i = 2; i*i<= n; i++) {
            if (n % i == 0) {
                t = 0;
                break;
            }
        }
    }
    if (t) {
        printf("It is a prime number.");
    }
    else {
        printf("It is not a prime number.");
    }

    return 0;
}