#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
#define rep(x, start, end)                                                   \
	for (auto x = (start) - ((start) > (end)); x != (end) - ((start) > (end)); \
			 ((start) < (end) ? x++ : x--))
#define rap(i, v) for (auto i : (v))
#define setup                       \
	ios_base::sync_with_stdio(false); \
	cin.tie(nullptr);                 \
	cout.tie(nullptr);
#define nl '\n'
#define pr pair
#define vc vector
#define dq deque
#define qu queue
#define pq priority_queue
#define mp map
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
#define fi first
#define se second
#define all(c) (c).begin(), (c).end()
#define sz(c) (ll)(c.size())
#define pub push_back
#define pob pop_back
#define mpr make_pair
#define eb emplace_back
#define debug(x) cerr << #x << ": " << x << '\n';

const ll mod = 1e18;

int main() {
	setup;
	ll q;
	cin >> q;
	vc<ll> v;
	ll cur(1);
	while (1) {
		ll tmp2 = cur;
		while (1) {
			ll tmp3 = cur;
			while (1) {
				ll tmp4 = cur;
				while (1) {
					v.pub(cur);
					if (cur > mod / 7) break;
					cur *= 7;
				}
				cur = tmp4;
				if (cur > mod / 5) break;
				cur *= 5;
			}
			cur = tmp3;
			if (cur > mod / 3) break;
			cur *= 3;
		}
		cur = tmp2;
		if (cur > mod / 2) break;
		cur *= 2;
	}
	sort(all(v));
	while (q--) {
		ll l, r;
		cin >> l >> r;
		cout << upper_bound(all(v), r) - lower_bound(all(v), l) << nl;
	}
}
