#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n, m, counter = 0;
	cin >> n >> m;
	vector<int> lunches;
	for (int i = 1; i <= m; i++) {
		int lunch;
		cin >> lunch;
		lunches.push_back(lunch);
	}
	sort(lunches.begin(), lunches.end());
	for (int j = 0; j < lunches.size(); j++) {
		n -= lunches[j];
		if (n < 0) break;
		counter++;
	}
	cout << counter;
}
