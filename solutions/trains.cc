#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
#define rep(x, start, end) \
  for (auto x = (start) - ((start) > (end)); x != (end) - ((start) > (end)); \
       ((start) < (end) ? x++ : x--))
#define rap(i, v) for (auto i : (v))
#define setup \
  ios_base::sync_with_stdio(false); \
  cin.tie(nullptr); \
  cout.tie(nullptr);
#define nl '\n'
#define pr pair
#define vc vector
#define dq deque
#define qu queue
#define pq priority_queue
#define mp map
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
#define fi first
#define se second
#define all(c) (c).begin(), (c).end()
#define sz(c) (ll)(c.size())
#define pub push_back
#define pob pop_back
#define mpr make_pair
#define eb emplace_back
#define debug(x) cerr << #x << ": " << x << '\n';

int main() {
  ll n;
  cin >> n;
  ll dp[n], a[n];
  rep(i, 0, n) cin >> a[i];

  dp[0] = 1;
  rep(i, 1, n) {
    dp[i] = (i + 1) * (i + 1);
    rep(j, 0, i) {
      if (a[j] < a[i]) continue;
      dp[i] = min(dp[i], dp[j] + (i - j) * (i - j));
    }
  }

  ll ans = dp[0] + n * n;
  rep(i, 1, n) ans = min(ans, dp[i] + (n - i) * (n - i));
  cout << ans << nl;
}
