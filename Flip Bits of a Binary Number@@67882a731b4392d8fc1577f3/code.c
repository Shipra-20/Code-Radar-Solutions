#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int flip = ~a;
    printf("%d",flip);
    return 0;
}