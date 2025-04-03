//https://atcoder.jp/contests/dp/tasks/dp_p
#include <iostream>
#include <vector>

using namespace std;

vector<int> g[(int)1e5];
int dp[(int)1e5][2];
const int mod = (int)1e9 + 7;

void dps(int v, int parent) {
    dp[v][0] = dp[v][1] = 1;
    for(int u: g[v]) {
        if (u == parent) {
            continue;
        }
        dps(u, v);
    }
    if (parent == -1) {
        return;
    }
    dp[parent][0] = 1ll * dp[parent][0] * (dp[v][0] + dp[v][1]) % mod;
    dp[parent][1] = 1ll * dp[parent][1] * dp[v][0] % mod;
}

int main() {
    int n;
    cin >> n;

    int i = 0;
    int v, u;
    while (cin >> v >> u) {
        v--, u--;
        g[v].push_back(u);
        g[u].push_back(v);
    }
    dps(0, -1);
    cout << (dp[0][0] + dp[0][1]) % mod << '\n';
}
