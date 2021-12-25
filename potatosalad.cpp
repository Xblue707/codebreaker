#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, d, mx = 0;
	cin >> n >> d;
	vector<int> p;
	for (int i = 0; i < n; i++) {
		int mass;
		cin >> mass;
		p.push_back(mass);
	}
	sort(p.begin(), p.end(), greater<>());
	for (int j = 0; j < d; j++) mx += p[j];

	cout << mx;
}
