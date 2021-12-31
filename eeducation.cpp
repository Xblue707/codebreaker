// suffering a very minor case of serious TLE
#include <algorithm>
#include <iostream>
#include <iterator>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int a, b;
	cin >> a >> b;

	int v1[a], v2[b];

	for (int i = 0; i < a; ++i) cin >> v1[i];

	for (int j = 0; j < b; ++j) cin >> v2[j];

	for (int k = a - 1; k >= 0; --k) {
		if (find(v2, v2 + b, v1[k]) != v2 + b) cout << v1[k] << ' ';
	}
}
