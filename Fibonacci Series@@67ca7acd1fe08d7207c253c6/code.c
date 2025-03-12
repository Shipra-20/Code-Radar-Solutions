void fibonacciSeries(int n) {
    int first = 0, second = 1, next;
    printf("%d", first);

    for (int i = 1; i < n; i++) {
        if (i == 1) {
            next = second;
        } else {
            next = first + second; 
            first = second;       
            second = next;
        }
        printf(" %d", next); 
    }

    printf("\n"); 
}
