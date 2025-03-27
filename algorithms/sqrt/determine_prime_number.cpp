#include <math.h>

char is_prime(long long n) {
    for (long long i = 2; i <= sqrtl(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
