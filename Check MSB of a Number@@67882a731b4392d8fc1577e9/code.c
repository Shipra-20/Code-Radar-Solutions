#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int mask=  1<<(sizeof(a)*8-1);
    int msb = (a&mask) != 0; 
    if (msb){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}