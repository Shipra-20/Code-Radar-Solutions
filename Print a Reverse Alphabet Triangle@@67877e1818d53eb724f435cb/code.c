#include <stdio.h>
int main(){
    int i,j,rows;
    char ch = 'A';
    scanf("%d",&rows);
    for(i = rows;i>=1;--i){
        ch = 'A';
        for(j = 1;j<=i;++j){
            printf("%c ",ch);
            ++ch;
        }
        printf("\n");
    }
    return 0;
}