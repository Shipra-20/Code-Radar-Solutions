#include <stdio.h>

int main(){
    int i, j, rows, num;
    scanf("%d", &rows);
    for(i = 1; i <= rows; i++){
        num = (i % 2 == 0) ? 0 : 1;
        for(j = 1; j <= i; j++){
            printf("%d ", num);
            num = (num == 1) ? 0 : 1;
        }
        printf("\n");
    }
    return 0;
}
