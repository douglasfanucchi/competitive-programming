#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    int n, k, greatest;
    cin >> n;
    vector<int> a;
    map<int, int>dp;
    k = 1;

    for (int i = 0; i < n; i++) {
        int el;
        cin >> el;
        a.push_back(el);
    }
    greatest = a[0];
    for(int i = 0; i < n; i++) {
        dp[a[i]] = dp[a[i] - 1] + 1;

        if (dp[a[i]] > k) {
            k = dp[a[i]];
            greatest = a[i];
        }
    }

    cout << k << '\n';
    int j = 0;
    for(int i = 0; i < k; i++) {
        for(;a[j] != greatest - (k - 1 - i); j++);
        cout << j + 1 << ' ';
    }
}