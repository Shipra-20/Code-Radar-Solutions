// Your code here...
#include<stdio.h>
int is_sorted(int arr[], int n){
    for (int i = 0; i < n - 1; i++){
    if (arr[i] > arr[i + 1]) {
        return 0;
        }
        }
        return 1;
        }
        int main(){
            int arr[100];
            int n;
            printf("Enter the number of elements: ");
            scanf("%d",&n);
            printf("Enter the elements: ");
            for (int i = 0; i < n; i++) {
                scanf("%d",&arr[i]);
                }
                if (is_sorted(arr, n)) {
                    printf("Sorted\n");
                    }
                    else {
                        printf("Not Sorted\n");
                        }
                        return 0;
                        }