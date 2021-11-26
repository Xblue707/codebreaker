#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
int main() {
	string s, first = "", second = "";
	cin >> s;
	// ensure that all characters in string are lowercase, for easier comparison
	for (int j = 0; j < s.size(); ++j) { s[j] = tolower(s[j]); }
	if (s.size() % 2 != 0) {
		first = s.substr(0, int(s.size() / 2));
		second = s.substr(int(s.size() / 2) + 1, s.size());
	}
	else {
		first = s.substr(0, s.size() / 2);
		second = s.substr(s.size() / 2, s.size());
	}
	reverse(second.begin(), second.end());
	if (first == second) cout << "Yes";
	else cout << "No";
}
