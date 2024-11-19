#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
double getstd(double arr[], int size){
    double sum = 0.0, mu, variance = 0.0, std;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    mu = sum / size;
    for (int i = 0; i < size; i++) {
        variance += pow(arr[i] - mu, 2);
    }
    variance /= size;
    std = sqrt(variance);
    return std;
}

int main() {
    double numbers[5]; 
    int size = 5;
printf("Enter 5 real numbers: ");
    for (int i = 0; i < size; i++) {
        scanf("%lf", &numbers[i]);
    }
    double result = getstd(numbers, size);

    printf("Standard Deviation = %f\n", result);

    return 0;
}
