#include <iostream>

using namespace std;

int _pow(int a, int b) {
    if (b == 0) return 1;
    if (a % 2 == 0) {
        int result = _pow(a, b/2);
        return (1ll * result * result);
    }

    int result = _pow(a, b/2);
    return ((((1ll * result * result))) * a);
}

int main() {
    cout << _pow(121, 300) << endl;
}
