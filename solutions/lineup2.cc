// lineup2
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
#define fast \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);
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

int main() {
  fast;
  ll n, q;
  cin >> n >> q;
  vc<ll> v;
  while (q--) {
    int j;
    cin >> j;
    if (j == 1) {
      ll x;
      cin >> x;
      v.pub(x);
    } else if (j == 2) {
      v.pob();
    }
  }

  auto me(max_element(all(v)));
  if (me == v.end())
    cout << 0 << nl;
  else
    cout << *me << nl;
}
