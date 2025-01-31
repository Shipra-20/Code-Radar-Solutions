#include <stdio.h>
int main(){
    int a,b;
    char ch;
    scanf("%d %d %c",&a,&b,&ch);
    int sum = a+b;
    int sub = a-b;
    int mul = a*b;
    float div = a/b;
    if(ch == '+'){
        printf("%d",sum);
    }
    else if(ch == '-'){
        printf("%d",sub);
    }
    else if(ch == '*'){
        printf("%d",mul);
    }
    else if(ch == '/'){
        printf("%d",div);
    }
    else{
        printf("error");
    }
    return 0;
}