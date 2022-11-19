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
inline void tuo(T outVar) {
	cout << outVar;
}
template <typename T, typename... S>
inline void tuo(T outVar, S... args) {
	cout << outVar;
	tuo(args...);
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
#define ain(var)            \
	for (auto& inVar : var) { \
		cin >> inVar;           \
	}
#define aout(var)           \
	for (auto outVar : var) { \
		cout << outVar << ' ';  \
	}                         \
	cout << '\n'
using vi = vector<ll>;
using vl = vector<vector<ll>>;
using pi = pair<ll, ll>;
#define fi first
#define se second
#define bgn(v) begin(v)
#define all(v) begin(v), end(v)
#define pb push_back
#define mp make_pair
#define sz(v) (ll)(v.size())
template <typename T, typename... S>
inline void srt(T a, S... args) {
	sort(begin(a), end(a), args...);
}
/* do not delete */

string con(int n) {
	string a = "";
	r0f(i, 16) {
		int k = n >> i;
		if (k & 1)
			a += '1';
		else
			a += '0';
	}
	return a;
}

int main() {
	setup int n, m;
	in(n, m);
	string a = con(n), b = con(m);
	string res = "";
	f0r(i, a.length()) {
		res += a[i];
		res += b[i];
	}
	out(stoi(res, 0, 2));
}
