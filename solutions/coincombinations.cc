// coincombinations
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
typedef vector<ll> vi;
typedef pair<ll, ll> pi;
typedef vector<pi> vpi;
#define nl '\n'
#define vc vector
#define dq deque
#define qu queue
#define pq priority_queue
#define mp map
#define fi first
#define se second
#define all(c) (c).begin(), (c).end()
#define sz(c) (int)(c.size())
#define pub push_back
#define pob pop_back
#define mpr make_pair
#define eb emplace_back
#define debug(x) cout << #x << ": " << x << '\n';

ll dp[1000001];

const int MOD = 13371337;

int main() {
  setup;
  ll n, val;
  cin >> n >> val;
  vi cn(n);
  rep(i, 0, n) cin >> cn[i];

  dp[0] = 1;
  rep(i, 1, n + 1) {
    rep(wt, 0, val + 1) {
      if (wt - cn[i - 1] >= 0) {
        dp[wt] += dp[wt - cn[i - 1]];
        dp[wt] %= MOD;
      }
    }
  }
  cout << dp[val] << nl;
}
