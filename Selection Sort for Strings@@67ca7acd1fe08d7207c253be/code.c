// Your code here...
#include <stdio.h>
void selectionSort(char arr[][100], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i][0] > arr[j][0]) { 
                for (int k = 0; k < 100; k++) {
                    char temp = arr[i][k];
                    arr[i][k] = arr[j][k];
                    arr[j][k] = temp;
                    break; 
                }
            }
        }
    }
}
void printArray(char arr[][100], int n) {
    for (int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
}