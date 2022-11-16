#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long

ull N;
vector<ull> f;

// basicaully sieve of whoever the guy is
void prime(ull N) {
	while (N % 2 == 0) {
		f.push_back(2);
		N /= 2;
	}
	for (ull i = 3; i <= sqrt(N); i += 2) {
		while (N % i == 0) {
			f.push_back(i);
			N /= i;
		}
	}

	if (N > 2) f.push_back(N);
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	// driver
	cin >> N;
	prime(N);

	// display in the format specified
	map<ull, ull> m;
	for (auto i : f) {
		auto it = m.find(i);
		if (it != m.end()) it->second++;
		else m.insert(pair<ull, ull>(i, 1));
	}

	for (auto j = m.begin(); j != m.end(); j++)
		cout << j->first << '^' << j->second << '\n';
}
