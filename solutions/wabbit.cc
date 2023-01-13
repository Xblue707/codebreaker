#include <bits/stdc++.h>
using namespace std;
typedef long int li;
typedef long long int ll;
typedef long double ld;
typedef unsigned long long int ull;
typedef pair<int, int> ii;
typedef pair<pair<int, int>, int> iii;
typedef vector<int> vi;
typedef vector<ii> vii;
#define rep(x, start, end) \
	for (auto x = (start) - ((start) > (end)); x != (end) - ((start) > (end)); \
			 ((start) < (end) ? x++ : x--))
#define each(i, v) for (auto i : (v))
#define fast() \
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL)
#define nl '\n'
#define pr pair
#define vc vector
#define dq deque
#define qu queue
#define pq priority_queue
#define mp map
#define fi first
#define se second
#define all(c) (c).begin(), (c).end()
#define sz(c) (ll)(c.size())
#define pub push_back
#define pob pop_back
#define mpr make_pair
mt19937 rng(chrono::system_clock::now().time_since_epoch().count());

int main() {
	fast();
	ull n, q, k;
	cin >> n >> q >> k;
	ull a[n], ans[n];
	rep(i, 0, n) cin >> a[i];
	sort(a, a + n, greater<ull>());

	ans[0] = a[0];
	int ind(0);
	rep(i, 1, n) {
		ans[i] = ans[i - 1] + a[i];
		if ((i + 1) % (k + 1) == 0) ans[i] += a[ind++];
	}

	rep(i, 0, q) {
		ull e;
		cin >> e;
		cout << ans[min(n - 1, e - 1)] << nl;
	}
}
