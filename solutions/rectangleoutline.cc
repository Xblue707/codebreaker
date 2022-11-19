// rectangleoutline
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
	int n, m;
	cin >> n >> m;

	vector<vector<bool>> grid(n, vector<bool>(m));
	vector<vector<int>> pref_sum(n + 1, vector<int>(m + 1));

	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;

		for (int j = 0; j < m; j++) {
			grid[i][j] = s[j] == 'X';

			// build prefix sum
			pref_sum[i + 1][j + 1] = pref_sum[i][j + 1] + pref_sum[i + 1][j];
			pref_sum[i + 1][j + 1] -= pref_sum[i][j];
			pref_sum[i + 1][j + 1] += grid[i][j];
		}
	}

	int max_area = 0;

	for (int c1 = 0; c1 < m; c1++) {
		for (int c2 = 0; c2 < m; c2++) {
			int prev = -1;

			for (int r = 0; r < n; r++) {
				bool emp = (pref_sum[r + 1][c2 + 1] - pref_sum[r][c2 + 1] -
										pref_sum[r + 1][c1] + pref_sum[r][c1]) == 0;

				// row only
				if (emp) {
					max_area = max(max_area, c2 - c1 + 1);
				}

				// we can continue off of a previous valid row
				if (emp && prev != -1) {
					// update answer
					max_area = max(max_area, (r - prev + 1) * (c2 - c1 + 1));
				}

				// reset prev
				if (grid[r][c1] || grid[r][c2]) {
					prev = -1;
				}

				// set prev
				if (emp && prev == -1) {
					prev = r;
				}
			}
		}
	}

	cout << max_area << endl;
}
