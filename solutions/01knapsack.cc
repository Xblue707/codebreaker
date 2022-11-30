#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  ll n, m;
  cin >> n >> m;
  ll w[500], v[500];
  for (ll i = 0; i < n; ++i) cin >> w[i] >> v[i];

  vector<vector<ll>> dp(n + 1, vector<ll>(m + 1));
  for (ll i = 0; i <= n; ++i) {
    for (ll j = 0; j <= m; ++j) {
      if (i == 0 || j == 0)
        dp[i][j] = 0;
      else if (w[i - 1] <= j)
        dp[i][j] = max(v[i - 1] + dp[i - 1][j - w[i - 1]], dp[i - 1][j]);
      else
        dp[i][j] = dp[i - 1][j];
    }
  }

  cout << dp[n][m];
}
