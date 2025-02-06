#include <stdio.h>
int main(){
    int input;
    scanf("%d",&input);
    int sum = 0;
    for (int i = 1; i <= input; i++) {
    sum += i;
  }
  printf("%d",sum);
  return 0;
}