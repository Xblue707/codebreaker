// conversations_easy
#include <bits/stdc++.h>
using namespace std;
typedef long int li;
typedef long long int ll;
typedef long double ld;
typedef unsigned long long int ull;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
#define rep(x, start, end)                                                   \
	for (auto x = (start) - ((start) > (end)); x != (end) - ((start) > (end)); \
			 ((start) < (end) ? x++ : x--))
#define each(i, v) for (auto i : (v))
#define fast()                      \
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL);
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
	li n;
	cin >> n;
	stack<li> s;
	map<li, li> m;

	while (n--) {
		int k;
		cin >> k;
		if (k == 1) {  // add new convo
			li j;
			cin >> j;
			s.push(j);
			m[j]++;
		} else if (k == 2) {  // delete any convo
			li j;
			cin >> j;
			m[j]--;
		} else if (k == 3) {  // delete top convo
			li tmp = s.top();
			s.pop();
			m[tmp]--;
		} else if (k == 4) {  // query top convo
			if (!s.empty())
				cout << s.top() << nl;
			else
				cout << -1 << nl;
		}
		while (!s.empty() and m[s.top()] == 0) {
			s.pop();
			if (s.empty()) break;
		}
	}
}
