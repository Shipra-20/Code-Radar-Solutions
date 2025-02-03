#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int n_bit = (a>>b)&1;
    printf("%d",n_bit);
    return 0;
}