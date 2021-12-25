#include <iostream>
using namespace std;
#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll n, big = 0, e, cur;
	bool alone = 1;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> e;
		if (e > big) {
			big = e;
			cur = i;
			alone = 1;
		}
		else if (e == big) alone = 0;
	}

	alone ? cout << cur << '\n' : cout << "MMMMMEEEEOOOOOWWWW!!!!!\n";
}
