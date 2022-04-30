#include <algorithm>
#include <iostream>
#include <queue>
#include <utility>
#include <vector>
using namespace std;

#define FASTIO \
	cin.tie(0);  \
	ios::sync_with_stdio(0);

#define FR first
#define SC second
#define lg long
#define pl pair<long, long>

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	lg n;
	cin >> n;
	priority_queue<pl, vector<pl>, greater<pl>> q;

	while (n--) {
		lg l, c;
		cin >> l >> c;
		q.emplace(l, c);
	}

	auto p = q.top();
	q.pop();
	lg t = 0;

	while (!q.empty()) {
		auto c = q.top();
		q.pop();
		if (c.FR != p.FR) {
			p = c;
			continue;
		}
		t += c.SC + p.SC;
		q.emplace(c.FR + 1, c.SC + p.SC);
		p = q.top();
		q.pop();
	}

	cout << t;
}
