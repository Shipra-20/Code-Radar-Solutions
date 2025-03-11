#include <stdio.h>

int isprime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int t, num;
    
  
    if (scanf("%d", &t) != 1) {
        printf("Invalid input\n");
        return 1;
    }

    while (t--) {
        if (scanf("%d", &num) != 1) {
            printf("Invalid number\n");
            return 1;
        }
        printf("%d\n", isprime(num));
    }

    return 0;
}
