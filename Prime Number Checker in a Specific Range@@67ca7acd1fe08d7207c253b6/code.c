void PrimesInRange(int start, int end) {
    for (int num = start; num <= end; num++) {
        if (num <= 1) continue; 
        int isPrime = 1; 
        for (int i = 2; i * i <= num; i++) { 
            if (num % i == 0) {
                isPrime = 0; 
                break;
            }
        }
        if (isPrime) {
            printf("%d ", num); 
        }
    }
    printf("\n"); 
}
