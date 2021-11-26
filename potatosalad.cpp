#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n, d, maxMass = 0;
	cin >> n >> d;
	vector<int> pMass;
	for (int i = 1; i <= n; i++) {
		int mass;
		cin >> mass;
		pMass.push_back(mass);
	}
	sort(pMass.begin(), pMass.end(), greater<>());
	for (int j = 0; j < d; j++) { maxMass += pMass[j]; }

	cout << maxMass;
}
