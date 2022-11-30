// speakers
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

bool cmp(ii a, ii b) {
  if (a.se == b.se) return a.fi < b.fi;
  return a.se < b.se;
}

int main() {
  setup;
  int n, m;
  cin >> n >> m;
  ii a[n];
  rep(i, 0, n) {
    int d, r;
    cin >> d >> r;
    a[i].fi = max(0, d - r);
    a[i].se = min(m, d + r);
  }
  sort(a, a + n, cmp);

  int svr(1), ima = a[0].se;
  rep(i, 1, n) {
    if (a[i].fi <= ima) continue;
    ima = a[i].se;
    svr++;
  }
  cout << svr;
}
