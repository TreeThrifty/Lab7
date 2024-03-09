#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>


void bubbleSort(int arr[], int n) {
    int i, j, temp, swaps = 0;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swaps++;
            }
        }
    }
    printf("Bubble Sort Swaps: %d\n", swaps);

}

void selectionSort(int arr[], int n) {
    int i, j, minIndex, temp, swaps = 0;
    for (i = 0; i < n-1; i++) {
        minIndex = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
            swaps++;
        }
    }
    printf("Selection Sort Swaps: %d\n", swaps);

}

int main() {
    int arr1[] = {97, 16, 45, 63, 13 , 22, 7, 58 ,72};
    int arr2[] = {15, 2, 4 ,57, 6, 7};
     int n = sizeof(arr1) / sizeof(arr1[0]);
     int i = sizeof (arr2) / sizeof(arr2[0]);


    bubbleSort(arr1, n);
    bubbleSort(arr2, i);

    // reset arrays

// array pointer to the first array
   int arr3[] = {97, 16, 45, 63, 13 , 22, 7, 58 ,72};
    int arr4[] = {15, 2, 4 ,57, 6, 7};
    int n = sizeof(arr3) / sizeof(arr3[0]);
    int i = sizeof (arr4) / sizeof(arr4[0]);



    
    selectionSort(arr3, n);
    selectionSort(arr4, i);

    return 0;
}