#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int n;
    bool *is_prime_factor = new bool[1000000];
    for(int i = 0; i < 1000000; i++)
    is_prime_factor[i] = true;
    is_prime_factor[0] = is_prime_factor[1] = false;

    for(int i = 2; i <= 1000000; i++) {
        for(int j = 2*i; j <= 1000000; j+=i) {
            is_prime_factor[j] = false;
        }
    }

    cin >> n;
    for(int i = 0; i < n; i++) {
        long long el;
        cin >> el;

        long long _sqrt = sqrtl(el);
        if (is_prime_factor[_sqrt] && _sqrt * _sqrt == el) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }

    return 0;
}
