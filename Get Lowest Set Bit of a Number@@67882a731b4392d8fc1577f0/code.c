#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int lowest = a&(1<<b);
    printf("%d",lowest);
    return 0;
}