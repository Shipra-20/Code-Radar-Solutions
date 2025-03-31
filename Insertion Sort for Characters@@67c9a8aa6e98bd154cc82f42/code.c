// Your code here...
#include<stdio.h>
void insertionSort(char arr[], int n) {
    for (int i = 1; i < n; ++i) {
        char key = arr[i];
        int j;
        for (j = i - 1; j >= 0 && arr[j] > key; --j) {
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = key; 
    }
}


void printArray(char arr[],int n){
    for (int i = 0;i < n;++i){
     printf("%c ",arr[i]);
    }
    printf("\n");
}
