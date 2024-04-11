#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define N 10  // Symbolic constant for the size of the array

float calculateStandardDeviation(float arr[], int size, float average);

int main() {
    float numbers[N];
    float average = 0.0;
    float standardDeviation;
    int i;
    int sum=0;

    // Read N elements from the user
    printf("Enter %d decimal numbers:\n", N);
    for (i = 0; i < N; i++) {
        scanf("%f", &numbers[i]);
       sum += numbers[i];
    }

    // Calculate the average of N numbers
    average =sum / N;

    // Pass the array elements, N, and average to the function
    standardDeviation = calculateStandardDeviation(numbers, N, average);

    // Display the standard deviation
    printf("Standard Deviation: %.2f\n", standardDeviation);

    return 0;
}

float calculateStandardDeviation(float arr[], int size, float average) {
    float sum = 0.0;
    int i;

    // Calculate the sum of squared differences from the average
    for (i = 0; i < size; i++) {
        sum += pow(arr[i] - average, 2);
    }

    // Calculate and return the standard deviation
    return sqrt(sum / size);
}