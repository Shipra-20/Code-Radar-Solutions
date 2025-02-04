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
        printf("%.0f\n",sum);
    }
    else if(ch == '-'){
        printf("%.0f\n",sub);
    }
    else if(ch == '*'){
        printf("%.0f\n",mul);
    }
    else if(ch == '/'){
        printf("%.0f\n",div);
    }
    else{
        if(b==0){
            printf("error");
        }
        else{
            printf("%d",a/b);
        }
    }
    return 0;
}