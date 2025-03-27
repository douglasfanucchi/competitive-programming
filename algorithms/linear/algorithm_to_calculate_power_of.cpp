long long pw(long long a, long long b) {
    long long ans = 1;
    for(int i = 0; i < b; i++) {
        ans *= 1ll * a % 1000000007;
    }
    return ans;
}
