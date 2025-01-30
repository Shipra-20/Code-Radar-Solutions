#include <stdio.h>
int main(){
    double a;
    scanf("%lf",&a);
    if (a == 0){
    printf("");
    }
    else
    {printf("You entered: %.4lf",a);
   }   return 0;
}