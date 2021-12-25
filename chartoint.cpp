#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<char> chars;

	for (int i = 0; i < n; i++) {
		char a;
		cin >> a;
		chars.push_back(a);
	}

	for (auto j : chars) cout << (int) j << '\n';
}
