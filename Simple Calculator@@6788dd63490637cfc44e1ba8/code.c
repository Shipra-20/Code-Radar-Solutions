#include <stdio.h>
int main(){
    float a,b;
    char ch;
    scanf("%d %d %c",&a,&b,&ch);
    float sum = a+b;
    float sub = a-b;
    float mul = a*b;
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