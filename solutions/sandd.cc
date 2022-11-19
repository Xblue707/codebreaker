#include "sandd.h"

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

int getPrice(int P) {
	int lo = 0, hi = P, mid, result = -1;
	long long sup, dem;

	if (supply(0) > demand(0) || supply(P) < demand(P)) {
		return -1;
	}

	while (lo <= hi) {
		mid = (lo + hi) / 2;
		sup = supply(mid);
		dem = demand(mid);

		if (sup == dem) {
			result = mid;
			break;
		} else if (sup > dem) {
			if (lo == hi) {
				result = mid;
				break;
			}
			hi = mid - 1;
			result = mid;
		} else if (sup < dem) { // sup < dem
			if (lo == hi) {
				result = mid;
				break;
			}
			lo = mid + 1;
			result = mid;
		}
	}

	return result;
}
