#include <stdio.h>
 int main() {
     int num, i,num1, isPrime = 1;
     scanf("%d", &num);
     for(int j = 0; j<=num; ++j){
        scanf("%d",&num1);
     }
     if (num1 <= 1) {
         isPrime = 0;
     } else {
         for (i = 2; i <= num1 / 2; ++i) {
             if (num1 % i == 0) {
                 isPrime = 0;
                 break;
             }
         }
     }
     if (isPrime) {
         printf("1");
     } else {
         printf("0");
     }
          return 0;
 }
