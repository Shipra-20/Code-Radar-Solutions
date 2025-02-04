#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int lowest = a & -a;
    printf("%d",lowest);
    return 0;
}