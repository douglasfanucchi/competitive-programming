long long pw(long long a, long long b) {
    if (b == 0) return 1;
    long long x = pw(a, b/2);
    if (b % 2 == 0)
        return x * x;
    return 1ll * x * x * a;
}
