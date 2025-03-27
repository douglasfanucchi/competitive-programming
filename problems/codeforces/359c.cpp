#include <iostream>

using namespace std;

int pw(int x, int exp, int mod) {
    if (exp == 0) return 1;
    int result = pw(x, exp/2, mod);
    if (exp % 2 == 0)
        return (1ll * result * result) % mod;
    return ((1ll * result * result) % mod) * x;
}

int main() {
    unsigned int n, x, mod;
    long long s = 0;

    mod = 1e9 + 7;
    cin >> n;
    cin >> x;

    for (int i = 0; i < n; i++) {
        unsigned int el;
        cin >> el;
        s += pw(x, el, mod);
    }
    long long exp = 0;
    while (s % x == 0) {
        s /= x;
        exp++;
    }
    cout << pw(x, exp, mod) << endl;
}
