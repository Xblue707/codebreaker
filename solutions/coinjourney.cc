// coinjourney
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
  setup;
  ll n, q;
  cin >> n >> q;
  ll a[1000005], ss[1000005], mx[1000005];
  rep(i, 1, n + 1) cin >> a[i];
  rep(i, 1, n + 1) ss[i] = ss[i - 1] + a[i];
  rep(i, 1, n + 1) mx[i] = max(ss[i], mx[i - 1]);
  while (q--) {
    ll x;
    cin >> x;
    if (mx[n] < x) {
      cout << -1 << ' ';
      continue;
    }
    ll l(0), r(n + 1);
    while (l < r - 1) {
      ll mid = (l + r) / 2;
      if (mx[mid] >= x)
        r = mid;
      else
        l = mid;
    }
    cout << r << ' ';
  }
}
