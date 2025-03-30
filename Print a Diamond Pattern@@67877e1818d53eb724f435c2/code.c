#include <stdio.h>
void printDiamond(int n) {
    int totalRows = 2 * n - 1;
    for (int i = 1; i <= totalRows; i++) {
        int stars, spaces;
        if (i <= n) {
            stars = 2 * i - 1; 
        } else {
            int k = totalRows - i + 1;
            stars = 2 * k - 1;
        }
        spaces = (totalRows - stars) / 2;
        for (int j = 0; j < spaces; j++) {
            printf(" ");
        }
        for (int j = 0; j < stars; j++) {
            printf("*");
        }
        printf("\n");
    }
}
int main() {
    int n;
    scanf("%d", &n);
    printDiamond(n); 
    return 0;
}
