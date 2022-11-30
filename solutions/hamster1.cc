#include <bits/stdc++.h>
using namespace std;

#define MAX 0x3f3f3f3f
#define MIN -0x3f3f3f3f
#define MOD 1000000007
#define REP(i, n) for (int i = 0; i < (n); i++)
#define FOR(i, a, b) for (int i = (a); i <= (b); i++)

int main() {
  // fast io
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  // setup
  int n, k;
  cin >> n >> k;
  vector<int> arr(n);

  // input
  REP(i, n) { cin >> arr[i]; }

  // dp array
  vector<int> dp(n, MAX);
  dp[0] = 0;

  FOR(i, 1, n - 1) {
    FOR(j, max(0, i - k), i - 1)
    dp[i] = min(dp[i], abs(arr[i] - arr[j]) + dp[j]);
  }

  cout << dp[n - 1] << '\n';
}
