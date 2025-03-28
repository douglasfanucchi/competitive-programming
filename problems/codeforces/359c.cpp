#include <iostream>
#include <vector>
#include <map>

#define ll long long

using namespace std;

int pw(ll a, ll b, ll mod) {
    if (b == 0) return 1;
    int result = pw(a, b/2, mod);
    if (b % 2 == 0) {
        return (((1ll * result) * result) % mod);
    }
    return (((((1ll * result) * result) % mod) * a) % mod);
}

int main() {
    int n;
    ll x, k;
    vector<ll> a;
    map<ll, ll> count;

    k = 0;
    cin >> n;
    cin >> x;

    for (int i = 0; i < n; i++) {
        ll el;
        cin >> el;
        k += el;
        a.push_back(el);
    }

    for(int i = 0; i < n; i++) {
        if (count.find(k - a[i]) == count.end()) {
            count[k - a[i]] = 0;
        }
        count[k - a[i]]++;
    }

    long long curr = k - a[n - 1];
    while (count[curr] % x == 0) {
        count[curr + 1] += count[curr] / x;
        count[curr] = 0;
        curr++;
    }

    cout << pw(x, curr, 1000000007) << '\n';
}
