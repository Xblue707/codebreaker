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
  ll n;
  cin >> n;
  ll a[n], b[n], lestema[n];
  rep(i, 0, n) cin >> a[i];
  rep(i, 0, n) cin >> b[i];
  lestema[n - 1] = b[n - 1];
  rep(i, n - 1, 0) { lestema[i] = max(lestema[i + 1], b[i]); }
  ll ima(0), svar(0);
  rep(i, 0, n) {
    ima += a[i];
    if (b[i] == lestema[i]) {
      svar += ima * b[i];
      ima = 0;
    }
  }
  cout << svar << nl;
}
