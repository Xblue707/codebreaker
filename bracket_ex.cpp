#include <iostream>
#include <map>
#include <stack>
using namespace std;

int main() {
	stack<char> pairs;
	map<char, char> m;
	m['{'] = 'x';
	m['}'] = '{';
	m['['] = 'x';
	m[']'] = '[';
	m['('] = 'x';
	m[')'] = '(';
	string S;

	int n;
	cin >> n >> S;

	for (int x = 0; x < n; x++) {
		char c = S[x];
		if (pairs.empty()) pairs.push(c);
		else if (m[c] == pairs.top()) pairs.pop();
		else pairs.push(c);
	}

	if (!pairs.size()) cout << "Valid";
	else cout << "Invalid";
}
