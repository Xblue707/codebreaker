// eelimination

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
inline void in(T &inVar) {
  cin >> inVar;
}
template <typename T, typename... S>
inline void in(T &inVar, S &...args) {
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

  // cin
  ll n;
  in(n);
  ll p[n];
  ll index[n + 1];
  f0r(i, n) {
    in(p[i]);
    index[p[i]] = i + 1;
  }
  ll ans[n];

  // use a stack to keep track
  st<ll> s;
  s.push(-1);
  // bool empty = 1;
  r0f(i, n - 1) {
    if (s.top() == -1) {
      s.push(p[i]);
      ans[i] = 0;
    } else {
      while (s.top() < p[i] and s.top() != -1) {
        s.pop();
      }
      if (s.top() == -1) {
        ans[i] = 0;
        s.push(p[i]);
      } else {
        ans[i] = index[s.top()];
        s.push(p[i]);
      }
    }
    // out(s.top());
  }
  f0r(i, n) cout << ans[i] << ' ';
}
