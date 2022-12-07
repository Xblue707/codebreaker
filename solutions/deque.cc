#include <bits/stdc++.h>
using namespace std;
typedef long int li;
typedef long long int ll;
typedef long double ld;
typedef unsigned long long int ull;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
#define rep(x, start, end) \
  for (auto x = (start) - ((start) > (end)); x != (end) - ((start) > (end)); \
       ((start) < (end) ? x++ : x--))
#define each(i, v) for (auto i : (v))
#define fast() \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL)
#define nl '\n'
#define pr pair
#define vc vector
#define dq deque
#define qu queue
#define pq priority_queue
#define mp map
#define fi first
#define se second
#define all(c) (c).begin(), (c).end()
#define sz(c) (ll)(c.size())
#define pub push_back
#define pob pop_back
#define mpr make_pair
mt19937 rng(chrono::system_clock::now().time_since_epoch().count());

ll dp[3003][3003];

ll solve(vector<ll>& a, ll i, ll j) {
  // base case
  if (i > j) return 0;

  // lookup
  if (dp[i][j] != -1) return dp[i][j];

  // rec case
  ll op1 = a[i] + min(solve(a, i + 1, j - 1), solve(a, i + 2, j));
  ll op2 = a[j] + min(solve(a, i + 1, j - 1), solve(a, i, j - 2));
  return dp[i][j] = max(op1, op2);
}

int main() {
  fast();
  ll n;
  cin >> n;
  vector<ll> a(n + 1);

  for (int i = 0; i < n; i++) cin >> a[i];
  memset(dp, -1, sizeof(dp));
  
  ll X = solve(a, 0, n - 1);
  ll sum = 0;
  for (ll j = 0; j < a.size(); j++) sum += a[j];

  ll Y = sum - X;
  cout << X - Y << nl;
}
