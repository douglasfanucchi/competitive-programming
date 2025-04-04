#include <vector>
#include <iostream>
#include <map>

using namespace std;

int main() {
    long long n, greatest, mod;
    mod = 1e10 + 7;
    vector<long long> a;
    map<long long, long long> count;
    long long scores[(long long)1e5 + 1];

    greatest = 1;
    cin >> n;
    for(long long i = 0; i < n; i++) {
        long long el;
        cin >> el;
        count[el]++;
        if (el > greatest)
            greatest = el;
        a.push_back(el);
    }

    scores[0] = 0;
    scores[1] = count[1] % mod;

    for(long long i = 2; i <= greatest; i++) {
        scores[i] = (count[i] * i % mod + scores[i - 2]) % mod;
        if (scores[i] < scores[i - 1]) {
            scores[i] = scores[i - 1];
        }
    }

    cout << scores[greatest] << '\n';
}
