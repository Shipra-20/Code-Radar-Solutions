#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int msb = (a>>7) & 1;
    if (lsb == 1){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}