#include <iostream>
#include <stack>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	stack<int> bricks;
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int b;
		cin >> b;

		if (bricks.empty() || bricks.top() > b) {
			bricks.push(b);
		} else {
			while (bricks.top() <= b) {
				bricks.pop();
				if (bricks.empty())
					break;
				else
					continue;
			}
			bricks.push(b);
		}
	}

	while (!bricks.empty()) {
		cout << bricks.top() << '\n';
		bricks.pop();
	}
}
