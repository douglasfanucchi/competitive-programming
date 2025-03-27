long long smallest_prime_factor(long long n) {
    for(long long i = 2; i <= n; i++) {
        for(long long j = i; j < n; j++) {
            if (j * i == n) {
                return i;
            }
        }
    }
    return n;
}
