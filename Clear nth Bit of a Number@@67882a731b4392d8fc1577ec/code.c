#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int clear = a&~(1<<b);
    printf("%d\n",clear);
    return 0;
}