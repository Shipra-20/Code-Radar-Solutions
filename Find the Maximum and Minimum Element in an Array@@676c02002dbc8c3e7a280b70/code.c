#include <stdio.h>

void min_max(int arr[], int size, int *max, int *min) {
    *max = arr[0];
    *min = arr[0];

    for (int i = 1; i < size; ++i) { 
        if (arr[i] > *max) {
            *max = arr[i];
        }
        if (arr[i] < *min) {
            *min = arr[i];
        }
    }
}

int main() {
    int size;
    scanf("%d", &size);

    int arr[size];

    for (int i = 0; i < size; ++i) { 
        scanf("%d", &arr[i]);
    }

    int max, min;
    min_max(arr, size, &max, &min);

    printf("%d %d\n", min, max);

    return 0;
}
