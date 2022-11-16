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
#define setup ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
template<typename T> inline void in(T& inVar) { cin >> inVar; }
template<typename T, typename... S> inline void in(T& inVar, S&... args) { cin >> inVar; in(args ...); }
template<typename T> inline void tuo(T outVar) { cout << outVar; }
template<typename T, typename ...S> inline void tuo(T outVar, S... args) { cout << outVar; tuo(args...); }
template<typename T> inline void out(T outVar) { cout << outVar << '\n'; }
template<typename T, typename ...S> inline void out(T outVar, S... args) { cout << outVar << ' '; out(args...); }
#define ain(var) for (auto &inVar : var) { cin >> inVar; }
#define aout(var) for (auto outVar : var) { cout << outVar << ' '; } cout << '\n'
using vi = vector<ll>;
using vl = vector<vector<ll>>;
using pi = pair<ll, ll>;
using vpi = vector<pi>; 
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
#define sz(v) (ll) (v.size())
/* do not delete */

ll lev(string a, string b) {
	const auto l1=sz(a), l2=sz(b);
	vl d(l1+1, vi(l2+1));
	d[0][0]=0;
	rep(i, 1, l1+1) d[i][0] = i;
	rep(i, 1, l2+1) d[0][i] = i;
	rep(i,1,l1+1) {
		rep(j,1,l2+1) {
			d[i][j] = min({d[i-1][j]+1, d[i][j-1]+1, d[i-1][j-1] + (a[i-1] == b[j-1] ? 0 : 1)});
		}
	}
	return d[l1][l2];
}

int main() {
	setup;
	string a, b; in(a,b);
	out(lev(a,b));
}
