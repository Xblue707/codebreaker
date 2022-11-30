// workoutplan
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
#define sz(c) (int)(c.size())
#define pub push_back
#define pob pop_back
#define mpr make_pair
#define eb emplace_back
#define debug(x) cout << #x << ": " << x << '\n';

void srt(vc<int> &v) {
  vc<int> f(10000001);
  rep(i, 0, sz(v)) { ++f[v[i] - (-5000000)]; }
  for (int i = 0, j = 0; i < 10000001; i++) {
    while (f[i]--) v[j++] = -5000000 + i;
  }
}

int main() {
  setup;
  int n, k;
  cin >> n >> k;
  int x[n], c[n];
  rep(i, 0, n) cin >> x[i];
  int a;
  cin >> a;
  rep(i, 0, n) cin >> c[i];
  pq<int, vc<int>, greater<int>> drinks;
  int ans = 0;
  rep(i, 0, n) {
    drinks.push(c[i]);
    if (x[i] > k) {
      while (x[i] > k) {
        if (drinks.empty()) {
          ans = -1;
          break;
        } else {
          ans += drinks.top();
          k += a;
          drinks.pop();
        }
      }
    }
    if (ans == -1) break;
  }
  cout << ans << nl;
}
