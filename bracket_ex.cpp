#include <bits/stdc++.h>
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
	char c;
	cin >> n >> S;

	for (int x; x < n; x++) {
		c = S[x];
		if (pairs.empty() == true) { pairs.push(c); }
		else if (m[c] == pairs.top()) { pairs.pop(); }
		else { pairs.push(c); }
	}

	if (pairs.size() == 0) { cout << "Valid"; }
	else { cout << "Invalid"; }
}
