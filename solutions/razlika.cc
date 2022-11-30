// razlika
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
  vc<int> v(n);
  rep(i, 0, n) cin >> v[i];

  srt(v);
  k = n - k;
  int ans = INT_MAX;
  dq<pr<int, int>> dec;
  rep(i, 1, n) {
    if (!dec.empty() && dec.front().se - 1 <= i - k) dec.pop_front();
    int diff = v[i] - v[i - 1];
    while (!dec.empty() && dec.back().fi >= diff) dec.pob();
    dec.pub(mpr(diff, i));
    if (i >= k - 1) {
      int M = v[i] - v[i - k + 1], m = dec.front().fi;
      ans = min(ans, M + m);
    }
  }
  cout << ans << nl;
}
