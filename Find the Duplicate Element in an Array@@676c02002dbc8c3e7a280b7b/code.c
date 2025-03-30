// Your code here...
#include<stdio.h>
void duplicate_elements(int arr[],int size){
        int found = 0;
        for(int i = 0;i <size;++i){
                for(int j = i+1; j<size;++j){
                        if (arr[j] == arr[i]){
                                printf("%d ",arr[i]);
                                found = 1;
                        break;
                        }
                }
        }
        if(!found){
                printf("none");
        }
       printf("\n");
}
int main(){
        int size;
        scanf("%d",&size);
        int arr[size];
        for (int i = 0; i <size; ++i){
                scanf("%d",&arr[i]);
        }
        duplicate_elements(arr,size);
        return 0;
}