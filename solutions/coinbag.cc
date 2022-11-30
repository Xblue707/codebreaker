#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int n, m;
  cin >> n >> m;

  int w[n + 1];
  int v[n + 1];
  w[0] = 0;
  v[0] = 0;

  // set up the dp
  vector<vector<int>> dp;
  for (int i = 0; i <= n; ++i) {
    dp.push_back({});
    for (int j = 0; j <= m; ++j) dp[i].push_back(0);
  }

  for (int i = 1; i <= n; ++i) {
    int a, b;
    cin >> a >> b;
    w[i] = a;
    v[i] = b;
  }

  for (int i = 1; i <= n; ++i) {
    for (int j = 0; j <= m; ++j) {
      dp[i][j] = dp[i - 1][j];
      if (j - w[i] >= 0) dp[i][j] = max(dp[i][j], dp[i - 1][j - w[i]] + v[i]);
      if (j - 1 >= 0) dp[i][j] = max(dp[i][j], dp[i][j - 1]);
    }
  }

  cout << dp[n][m];
}
