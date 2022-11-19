#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
#define rep(i, s, e) for (ll i = (s); i < (e); i++)
#define per(i, s, e) for (ll i = (s); i > (e); i--)
#define f0r(i, n) for (ll i = 0; i < (n); i++)
#define r0f(i, n) for (ll i = (n); i >= 0; i--)
#define far(i, v) for (auto i : (v))
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
typedef vector<ll> vi;
typedef pair<ll, ll> pi;
typedef vector<pi> vpi;
#define vc vector
#define dq deque
#define qu queue
#define pq priority_queue
#define st stack
#define ma map
#define fi first
#define se second
#define all(c) (c).begin(), (c).end()
#define sz(c) (ll)(c.size())
#define pb push_back
#define mp make_pair
#define int long long

int32_t main() {
	setup;
	int n;
	in(n);
	int a[n];
	f0r(i, n) in(a[i]);
	if (n == 3) {
		if (a[1] <= a[2] && a[1] - (a[2] - a[1]) >= 0) {
			out(1);
			return 0;
		}
		if (a[2] >= a[0] && (a[2] + a[0]) % 2 == 0)
			out(2);
		else
			out(3);
	} else {
		vi diffs;
		diffs.pb(a[1] - a[0]);
		diffs.pb(a[2] - a[1]);
		diffs.pb(a[3] - a[2]);
		far(d, diffs) {
			int wrongidx = -1, nowrongs = 0, st = a[0];
			rep(i, 1, n) {
				st += d;
				if (a[i] != st) {
					wrongidx = i + 1;
					nowrongs++;
					if (nowrongs >= 2) break;
				}
			}

			if (nowrongs == 1) {
				out(wrongidx);
				return 0;
			}
		}
		out(1);
	}
}
