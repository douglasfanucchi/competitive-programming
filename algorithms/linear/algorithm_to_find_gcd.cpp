#include <iostream>

using namespace std;

long long gcd(long long a, long long b) {
    long long min = a;
    long long ans = 1;
    if (b < a) min = b;

    for(long long i = 1; i <= min; i++) {
        if (a % i == 0 && b % i == 0) {
            ans = i;
        }
    }

    return ans;
}

int main() {
    long long n1 = 9223372036854775807;
    long long n2 = 9223372036854775806;

    cout << gcd(n1, n2) << endl;
}
