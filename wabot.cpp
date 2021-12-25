#include <algorithm>
#include <iostream>
#include <queue>
#include <utility>
#include <vector>
using namespace std;

#define FASTIO \
	cin.tie(0);  \
	ios::sync_with_stdio(0);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	long n;
	cin >> n;
	priority_queue<pair<long, long>, vector<pair<long, long>>, greater<pair<long, long>>> q;

	while (n--) {
		long l, c;
		cin >> l >> c;
		q.emplace(l, c);
	}

	auto p = q.top();
	q.pop();
	long t = 0;

	while (!q.empty()) {
		auto c = q.top();
		q.pop();
		if (c.first != p.first) {
			p = c;
			continue;
		}
		t += c.second + p.second;
		q.emplace(c.first + 1, c.second + p.second);
		p = q.top();
		q.pop();
	}

	cout << t;
}
