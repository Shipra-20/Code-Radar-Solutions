#include <stdio.h>
int main(){
    float a,b;
    char ch;
    scanf("%f %f %c",&a,&b,&ch);
    float sum = a+b;
    float sub = a-b;
    float mul = a*b;
    float div = a/b;
    if(ch == '+'){
        printf("%f\n",sum);
    }
    else if(ch == '-'){
        printf("%f\n",sub);
    }
    else if(ch == '*'){
        printf("%f\n",mul);
    }
    else if(ch == '/'){
        printf("%f\n",div);
    }
    else{
        printf("error");
    }
    return 0;
}