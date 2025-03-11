#include<stdio.h>
int fibonacci(int n);
int fibonacci(int n){
    int first = 0,second =1,next;
  if (n == 0){
    return 0;
  }
  if(n == 1){
    return 1;
  } 

for(int i = 2;i <= n;++i){
              printf("%d ",first); 
              next = first+second;
              first = second;
              second = next;
          }
          return second;
        
}
int main(){
  int a;
  scanf("%d",&a);
  int result = fibonacci(a);
  printf("%d\n ",result);
  return result;
}