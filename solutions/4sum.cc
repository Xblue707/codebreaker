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
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  int as[a], bs[b], cs[c], ds[d];
  map<int, bi> m;
  rep(i, 0, a) cin >> as[i];
  rep(i, 0, b) cin >> bs[i];
  rep(i, 0, c) cin >> cs[i];
  rep(i, 0, d) cin >> ds[i];

  rep(i, 0, a) {
    rep(j, 0, b) {
      int s = as[i] + bs[j];
      m[s] = bi(1, ii(as[i], bs[j]));
    }
  }

  rep(i, 0, c) {
    rep(j, 0, d) {
      int s = cs[i] + ds[j];
      if (m[-s].fi) {
        cout << m[-s].se.fi << ' ' << m[-s].se.se << ' ' << cs[i] << ' '
             << ds[j] << nl;
        return 0;
      }
    }
  }
}
