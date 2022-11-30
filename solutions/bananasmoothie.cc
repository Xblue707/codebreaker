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

typedef pr<bool, ii> bi;

int main() {
  setup;
  ll n, k;
  cin >> n >> k;
  vc<ll> v;
  rep(i, 0, n) {
    ll e;
    cin >> e;
    if (e < 0) continue;
    v.pub(e);
  }

  sort(all(v), greater<ll>());

  ll ans(0);
  for (ll i = k - 1; i < sz(v); i += k) ans += v[i];
  cout << ans << nl;
}
