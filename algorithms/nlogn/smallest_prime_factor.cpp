long long smallest_prime_factor(long long n) {
    for(long long i = 2; i <= n; i++) {
        for(long long j = 2*i; j <= n; j += i) {
            if (j == n) {
                return i;
            }
        }
    }
    return n;
}
