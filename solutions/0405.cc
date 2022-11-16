#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, s, e) for (ll i = (s); i < (e); i++)
#define per(i, s, e) for (ll i = (s); i > (e); i--)
#define f0r(i, n) for (ll i = 0; i < (n); i++)
#define far(i, v) for (auto i : v)
#define setup ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
template<typename T> inline void input(T& inVar) { cin >> inVar; }
template<typename T, typename... S> inline void input(T& inVar, S&... args) { cin >> inVar; input(args ...); }
template<typename T> inline void print(T outVar) {cout << outVar; }
template<typename T, typename... S> inline void print(T outVar, S... args) { cout << outVar << ' '; print(args ...); }

int main() {
	setup
	ll n, m; input(n, m);
	f0r(i,n) print("1 ");
}
