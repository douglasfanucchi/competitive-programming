#include <iostream>

using namespace std;

long long smallest_prime_factor(long long n);

int main() {
    // int n = 99999989;
    int n = 10789 * 1553;

    cout << smallest_prime_factor(n) << endl;
    return 0;
}
