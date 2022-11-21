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

vi dsu, pwr;

int find(int n) {
	if (dsu[n] == n) return n;
	return dsu[n] = find(dsu[n]);
}

void merge(int a, int b) {
	a = find(a);
	b = find(b);
	if (a == b) {
		cout << -1 << nl;
		return;
	} else if (pwr[a] < pwr[b])
		swap(a, b);

	dsu[b] = a;
	cout << a + 1 << nl;
}

int main() {
	int n, m;
	cin >> n >> m;
	dsu.resize(n);
	pwr.resize(n);
	rep(i, 0, n) {
		cin >> pwr[i];
		dsu[i] = i;
	}

	rep(i, 0, m) {
		int a, b;
		cin >> a >> b;
		a--, b--;
		merge(a, b);
	}
}
