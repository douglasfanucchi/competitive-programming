#include <iostream>
#include <vector>

using namespace std;

long long gcd(long long a, long long b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

long long _abs(long long n) {
    if (n < 0) return n * -1;
    return n;
}

int main() {
    int n, m;
    cin >> n;
    cin >> m;
    std::vector<long long, std::allocator<long long> > a, b;

    for(int i = 0; i < n; i++) {
        long long number;
        cin >> number;
        a.push_back(number);
    }
    for(int i = 0; i < m; i++) {
        long long number;
        cin >> number;
        b.push_back(number);
    }
    long long fixed = 0;

    for (int i = 1; i < n; i++) {
        fixed = gcd(_abs(a[0] - a[i]), fixed);
    }

    for (int i = 0; i < m; i++) {
        cout << gcd(b[i] + a[0], fixed) << " ";
    }
}
