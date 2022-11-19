// guessqueue
// priority_queue and queue cases settled, left multiset
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
#define endl '\n'
typedef vector<ll> vi;
typedef pair<ll, ll> pi;
typedef vector<pi> vpi;
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
#define mkp make_pair
#define debug(x) cout << #x << ": " << x << '\n';

int main() {
	// setup;
	int n;
	cin >> n;
	pq<int> p;
	qu<int> q;
	multiset<int> m;
	bool isp = 1, isq = 1, ism = 1, toggle = 1;
	int op, num;
	// bool toggle = 1;  // 0 - pop from left (min), 1 - pop from right (max)

	rep(i, 0, n) {
		cin >> op >> num; // query
		if (op == 1) {    // add
			p.push(num);
			q.push(num);
			m.insert(num);
		} else {
			if (p.top() != num) isp = 0;   // can
			if (q.front() != num) isq = 0; // can

			if ((num != *m.begin() && !toggle) || (num != *(--m.end()) && toggle))
				ism = 0;
			toggle == 0 ? toggle = 1 : toggle = 0;

			p.pop();
			q.pop();
			// popping function works
			if (toggle) // toggle 1 means remove the max
				m.erase(m.begin());
			else
				m.erase(--m.end());

			// dbg
			// debug(ism);
			// cout << "m is now: ";
			// rap(i, m) cout << i << ' ';
			// cout << endl;
			// debug(toggle);
		}
	}

	// keep track of # of ds to fulfil the queries
	int trues = 0;
	if (isp) trues++;
	if (isq) trues++;
	if (ism) trues++;

	if (trues > 1) { // more than one ds fulfils the above
		cout << "unsure\n";
	} else if (trues == 1) {
		if (isp) cout << "priority queue\n";
		if (isq) cout << "queue\n";
		if (ism) cout << "fickle minded priority queue\n";
	}
}
