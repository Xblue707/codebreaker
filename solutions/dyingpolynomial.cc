// dyingpolynomial
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;

int Q;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> Q;
	for (int i = 0; i < Q; ++i) {
		ll a, b, c, d;
		cin >> a >> b >> c >> d;
		ll lo = 0, up = 100000;
		while (up - lo > 1) {
			ll avg = (up + lo) / 2;
			if (a * avg * avg * avg + b * avg * avg + c * avg >= d)
				up = avg;
			else
				lo = avg;
		}
		cout << up << '\n';
	}
}
