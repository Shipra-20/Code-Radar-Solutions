#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    int index = 0;
    if (a > 0) {
        while ((a & 1) == 0) {
            a >>= 1;
            index++; 
        }
    } else {
        index = -1; 
    }
    printf("%d", index);
    return 0;
}
