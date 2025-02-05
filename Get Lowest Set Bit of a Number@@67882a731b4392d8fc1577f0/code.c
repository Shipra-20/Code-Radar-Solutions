#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int lowest = (a==1)?0:a & -a;
    printf("%d",lowest);
    return 0;
}