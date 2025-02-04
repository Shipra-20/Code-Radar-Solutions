#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int set = a|(1<<b);
    printf("%d",set);
    return 0;
}