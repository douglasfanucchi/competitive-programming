#include <iostream>

using namespace std;

long long gcd(long long a, long long b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    long long n1 = 9223372036854775807;
    long long n2 = 9223372036854775806;

    cout << gcd(n1, n2) << endl;
}
