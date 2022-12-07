#include <bits/stdc++.h>
using namespace std;
typedef long int li;
typedef long long int ll;
typedef long double ld;
typedef unsigned long long int ull;
typedef pair<int, int> ii;
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

int exponentiation(int x, int n, int m) {
	int v = 1;
	while (n > 0) { // let the current iteration be i (0-indexed)
		if (n & 1) v = (v * x) % m; // if i-th bit is 1, multiply x^(2^i)
		x = (x * x) % m; // calculate x^(2^(i+1)) for the next iteration
		n >>= 1;
	}
	return v;
}

vi SieveOfEratosthenes(int n) {
	bool prime[n + 1];
	vi v;
	memset(prime, true, sizeof(prime));
	for (int p = 2; p * p <= n; p++) {
		if (prime[p]) {
			v.pub(p);
			for (int i = p * 2; i <= n; i += p) prime[i] = false;
		}
	}
	return v;
}

// very fast i/o
inline int readInt() {
	int x = 0;
	bool negative = false;
	char ch = getchar();
	if (ch == '-') {
		negative = true;
		ch = getchar();
	}
	while (ch < '0' || ch > '9') ch = getchar_unlocked();
	while (ch >= '0' && ch <= '9') {
		x = (x << 3) + (x << 1) + ch - '0';
		ch = getchar_unlocked();
	}
	return negative ? -x : x;
}

stack<ii> s;
int n;

int main() {
	fast();
	n = readInt();
	
	rep(i, 0, n) {
		int x, y;
		x = readInt();
		y = readInt();
		bool add = true;
		
		while (!s.empty()) {
			auto [dx, dy] = s.top();
			if (x - dx <= dy - y) {
				add = false;
				break;
			}
			if (x - dx <= y - dy) {
				s.pop();
			} else
				break;
		}
		if (add) {
			s.push({x, y});
		}
	}
	cout << s.size() << nl;
}
