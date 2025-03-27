#include <iostream>

using namespace std;

void print_all_primes_up_to(long long n) {
    char *arr = new char[n + 1];
    for (long long i = 0; i <= n; i++) {
        arr[i] = 1;
    }
    arr[0] = arr[1] = 0;

    for(long long i = 2; i <= n; i++) {
        for(long long j = 2*i; j <= n; j+=i) {
            arr[j] = 0;
        }
    }

    for (long long i = 0; i <= n; i++) {
        if (arr[i]) {
            cout << i << endl;
        }
    }
    delete[] arr;
}

int main() {
    print_all_primes_up_to(100000000);
}
