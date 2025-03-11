#include<stdio.h>
int fibonacci(int n);
int main(){
  int a;
  scanf("%d",&a);
  int result = fibonacci(a);
  printf("%d",result);
  return 0;
}
int fibonacci(int n){
  if (n == 0){
    return 0;
  }
  if(n == 1){
    return 1;
  } 
int first = 0,second =1,next;
for(int i = 2;i <= n;++i){
              printf("%d",first); 
              next = first+second;
              first = second;
              second = next;
          }
          return next;
        
}