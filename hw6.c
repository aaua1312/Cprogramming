#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
    int number[5];
    int odd[5], even[5]; 
    int oddcount = 0, evencount = 0;
    printf("정수 5개를 입력하세요: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &number[i]);

        if (number[i] % 2 == 0) {
            even[evencount++] = number[i];
        }
        else {
            odd[oddcount++] = number[i];
        }
    }
    printf("Odd numbers: ");
    for (int i = 0; i < oddcount; i++) {
        printf("%d ", odd[i]);
    }

    printf("\nEven numbers: ");
    for (int i = 0; i < evencount; i++) {
        printf("%d ", even[i]);
    }
    printf("\n");

    return 0;
}