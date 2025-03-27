#include <iostream>

using namespace std;

char is_prime(long long n);

void print_primes_up_to(long long n) {
    for (int i = 2; i <= n; i++) {
        if (is_prime(i)) {
            cout << i << endl;
        }
    }
}

int main() {
    print_primes_up_to(100000000);
}
