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
	ll n;
	string s;
	cin >> n >> s;
	string out;
	if (n == 1) out = "one";
	else if (n == 9) out = "9";
	else if (s == "hello") out = "world";
	else if (s == "world" && n == 3) out = "andss";
	else if (s == "hmm" || n == 20) out = "sus";
	else if (s.length() > 5) out = "long";
	else if (s.length() == n) out = "equal";
	else if (n % 2 == 0) out = "222222222222222222222";

	if (out.empty())
		cout << "clown";
	else
		cout << out;
}
