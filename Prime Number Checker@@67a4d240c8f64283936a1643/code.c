#include <stdio.h>

int is_prime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int t, num;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &num);
        printf("%d\n", is_prime(num));
    }
    return 0;
}
