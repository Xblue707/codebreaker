#include <iostream>
#include <map>
#define lo long
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	map<lo, lo> x;
	lo n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		lo g;
		cin >> g;
		x[g] = i;
	}

	for (int j = 1; j <= x.size(); j++) { cout << x[j] << '\n'; }
}
