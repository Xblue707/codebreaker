#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, s;
	cin >> n;
	s = n;
	vector<int> v, deleted;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		v.push_back(num);
	}
	while (true) {
		int d = 0;
		for (int i = v.size() - 1; i >= 0; i--) {
			if (i % 2 == v[i] % 2) {
				continue;
			} else if (i % 2 != v[i] % 2) {
				d++;
				deleted.push_back(v[i]);
				v.erase(v.begin() + i);
				break;
			}
		}
		if (d == 0) {
			break;
		}
	}

	cout << deleted.size() << "\n";
	for (int i = 0; i < deleted.size(); i++) {
		cout << deleted[i] << " ";
	}
}
