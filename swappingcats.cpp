#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, swaps;
	vector<int> cats;
	cin >> n;
	for (int i = 0; i < n; i++) cats.push_back(i);
	cin >> swaps;

	for (int j = 0; j < swaps; j++) {
		int k, l;
		cin >> k >> l;
		iter_swap(cats.begin() + k, cats.begin() + l);
	}

	for (auto m : cats) cout << m << '\n';
}
