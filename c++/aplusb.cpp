#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MAXN = 218;
const int MAXM = 1<<20;
ll dp[MAXM + 5];
ll a[MAXN + 5];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    dp[0] = 1;
    for(int i = 1; i <= n; i++) {
        for(int j = m; j >= a[i]; j--) {
            dp[j] += dp[j - a[i]];
        }
    }

    cout << dp[m] << "\n";

    return 0;
}
