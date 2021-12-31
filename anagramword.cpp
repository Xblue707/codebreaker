#include <algorithm>
#include <cctype>
#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
	string a, b;
	getline(cin, a);
	getline(cin, b);
	unordered_map<char, int> m;

	for (auto i : a) {
		if (!isalpha(i)) continue;
		i = tolower(i);
		auto f = m.find(i);
		if (f != m.end()) m.at(i) = f->second + 1;
		else m.emplace(i, 1);
	}

	for (auto j : b) {
		if (!isalpha(j)) continue;
		j = tolower(j);
		auto f = m.find(j);
		if (f == m.end() || f->second == 0) {
			cout << "NO";
			return 0;
		}
		else {
			m.at(j) = f->second - 1;
		}
	}

	if (any_of(m.begin(), m.end(), [](auto &k) { return k.second < 0; }))
		cout << "NO";
	else cout << "YES";
}
