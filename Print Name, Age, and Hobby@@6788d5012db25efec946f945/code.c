#include <stdio.h>
int main(){
    char c[100];
    int a;
    char b[100];
    scanf("%s %d\n",&c,&a);
    scanf("%s",&b);
    printf("Name: %s\n",c);
    printf("Age: %d\n",a);
    printf("Hobby: %s",b);
    return 0;
}