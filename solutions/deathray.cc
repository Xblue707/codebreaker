// deathray
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
#define setup \
  ios_base::sync_with_stdio(false); \
  cin.tie(nullptr); \
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

int main() {
  // cin everything
  setup;
  ll n, q, damage = 0;
  in(n, q);
  pq<ll, vi, greater<ll>> p;

  f0r(i, n) {
    ll t;
    in(t);
    p.push(t);
  }

  // keep going as long as there are queries
  while (q--) {
    char c;
    ll j;
    in(c, j);
    if (c == 'A') {
      damage += j;
      while (p.top() <= damage && !p.empty()) p.pop();
    } else if (c == 'B') {
      if (!p.empty()) {
        ll temp = p.top();
        p.pop();
        p.push(temp + j);
      }
    }
  }
  out(n - sz(p));
}
