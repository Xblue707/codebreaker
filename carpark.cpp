#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
	int n = 0, s = 0, temp, ans = 0, lol = 0, count = 0, k = 0, c = 0;
	priority_queue<int, vector<int>, greater<int>> gaps;

	cin >> n >> s;

	int cars[n];

	for (int i = 0; i < n; i++) {
		cin >> temp;
		cars[i] = temp;
	}

	while (true) {
		if (cars[lol] == 1) break;
		cars[lol] = -1;
		lol++;
	}

	for (int i = 0; i < n; i++) {
		if (cars[i] == 1) {
			c = 1;
			ans++;
			if (count > 0) {
				gaps.push(count);
				count = 0;
			}
		}
		else if (cars[i] == 0) {
			k += c;
			c = 0;
			count++;
		}
	}

	if (cars[n - 1] == 1) k++;

	for (int i = s; i < k; i++) {
		ans += gaps.top();
		gaps.pop();
	}

	cout << ans;
}
