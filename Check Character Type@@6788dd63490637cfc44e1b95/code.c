#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch >= '0' && ch <= '9'){
        printf("Digit");
    }
    else if((ch>='A' && ch<='Z') || (ch>='a' && ch <='z'))
    {if ((ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u') || (ch == 'A') || (ch == 'E') 
        || (ch == 'I') || (ch == 'O') || (ch == 'U')){
            printf("Vowel\n");
        }
    else{
        printf("Consonant\n");
    } 
    }
    else{
        printf("Special Character\n");
    }   
    return 0;
}