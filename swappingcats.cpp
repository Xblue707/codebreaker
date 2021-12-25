#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> cats;
	for (int i = 0; i < n; i++) cats.push_back(i);
	int swaps;
	cin >> swaps;
	for (int j = 0; j < swaps; j++) {
		int k, l;
		cin >> k >> l;
		iter_swap(cats.begin() + k, cats.begin() + l);
	}

	for (int m = 0; m < cats.size(); m++) cout << cats[m] << '\n';
}
