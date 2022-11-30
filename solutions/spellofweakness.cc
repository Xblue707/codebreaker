// spellofweakness
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
#define pr pair
#define vc vector
#define dq deque
#define qu queue
#define pq priority_queue
#define mp map
#define fi first
#define se second
#define all(c) begin((c)), end((c))
#define sz(c) (ll)(c.size())
#define pub push_back
#define pob pop_back
#define mpr make_pair
#define eb emplace_back
#define debug(x) cout << #x << ": " << x << '\n';

int main() {
  setup;
  ll n, d, k, ans = 0;
  cin >> n >> d >> k;
  ll arr[n];
  ll newd = d;

  rep(i, 0, n) cin >> arr[i];
  sort(arr, arr + n);

  rep(i, 0, k) {
    newd -= arr[i] / 2;
    if (newd >= 0) ans++;
  }

  rep(i, k, n) {
    ll next = arr[i - k], curr = arr[i];
    if (newd - next + (next / 2) - (curr / 2) >= 0LL) {
      newd += (next / 2) - next - (curr / 2);
      ans++;
    }
  }
  cout << ans << nl;
}
