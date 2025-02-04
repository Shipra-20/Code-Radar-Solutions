#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int toggle = a^(1<<b);
    printf("%d",toggle);
    return 0;
}