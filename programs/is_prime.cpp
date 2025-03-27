#include <iostream>
#include <math.h>

using namespace std;

char is_prime(long long n);

int main() {
    long long n = 999999000001;

    if (is_prime(n)) {
        cout << "PRIME" << endl;
    } else {
        cout << "NOT PRIME" << endl;
    }
}
