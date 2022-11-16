/* the holy starter code */
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using ull = unsigned long long;
#define rep(i, s, e) for (ll i = (s); i < (e); i++)
#define per(i, s, e) for (ll i = (s); i > (e); i--)
#define f0r(i, n) for (ll i = 0; i < (n); i++)
#define r0f(i, n) for (ll i = (n); i >= 0; i--)
#define far(i, v) for (auto i : v)
#define setup                       \
  ios_base::sync_with_stdio(false); \
  cin.tie(nullptr);                 \
  cout.tie(nullptr);
template <typename T>
inline void in(T& inVar) {
  cin >> inVar;
}
template <typename T, typename... S>
inline void in(T& inVar, S&... args) {
  cin >> inVar;
  in(args...);
}
template <typename T>
inline void out(T outVar) {
  cout << outVar << '\n';
}
template <typename T, typename... S>
inline void out(T outVar, S... args) {
  cout << outVar << ' ';
  out(args...);
}
using vi = vector<ll>;
using pi = pair<ll, ll>;
using vpi = vector<pi>;
#define vc vector
#define dq deque
#define qu queue
#define pq priority_queue
#define st stack
#define ma map
#define fi first
#define se second
#define all(v) begin(v), end(v)
#define pb push_back
#define mp make_pair
#define sz(v) (ll)(v.size())
/* do not delete */

int main() {
  setup;
  ll q;
  in(q);
  dq<ll> left, right;  // create two vectors to store the left and right sides

  f0r(i, q) {
    int x;
    in(x);
    if (x == 1) {
      ll j;
      in(j);
      // cin
      if (left.empty() && right.empty())
        left.pb(j);
      else if (left.size() > right.size())
        right.pb(j);
      else if (left.size() == right.size()) {
        right.pb(j);
        left.pb(right.front());
        right.pop_front();
      }
    } else if (x == 2) {
      left.swap(right);
      if (left.size() < right.size()) {
        left.pb(right.front());
        right.pop_front();
      }
    }
  }
  far(i, left) cout << i << ' ';
  far(i, right) cout << i << ' ';
}
