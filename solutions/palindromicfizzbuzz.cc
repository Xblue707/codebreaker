#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, s, e) for (ll i = (s); i < (e); i++)
#define per(i, s, e) for (ll i = (s); i > (e); i--)
#define f0r(i, n) for (ll i = 0; i < (n); i++)
#define far(i, v) for (auto i : v)
#define setup \
  ios_base::sync_with_stdio(false); \
  cin.tie(nullptr); \
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

int main() {
  setup ll s, e;
  in(s, e);
  rep(i, s, e + 1) {
    string s = to_string(i), s1 = s;
    reverse(s1.begin(), s1.end());
    if (s == s1)
      out("Palindrome!");
    else
      out(i);
  }
}
