#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int clear = ~(a>>b)&1;
    printf("%d",clear);
    return 0;
}