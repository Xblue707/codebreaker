// hungryrabbits1
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
#define rep(x, start, end)                                                   \
	for (auto x = (start) - ((start) > (end)); x != (end) - ((start) > (end)); \
			 ((start) < (end) ? x++ : x--))
#define each(i, v) for (auto i : (v))
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

int n;
vc<pr<ll, ll>> pile;

bool cmp(pr<ll, ll> a, pr<ll, ll> b) { return a.se < b.se; }

int main() {
	setup;
	cin >> n;

	// cin
	rep(i, 0, n) {
		ll x;
		cin >> x;

		// consider the time it takes to finish the pile if we put n rabbits from
		// the left and n rabbits from the right
		if (x != 0) pile.pub({x + i, x + n - i - 1});
	}

	// if empty, ie. all elements are 0, then cout 0
	if (pile.empty()) {
		cout << 0 << nl;
		return 0;
	}

	// otherwise sort the piles
	sort(all(pile));
	ll ans = pile.back().fi;  // take the maximum

	sort(all(pile), cmp);
	ans = max(ans,
						pile.back().se);  // then take the maximum for all non-empty piles
	cout << ans << nl;
}
