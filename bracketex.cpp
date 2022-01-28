#include <iostream>
#include <map>
#include <stack>
using namespace std;

int main() {
	stack<char> bracs;
	map<char, char> pairs;
	pairs['{'] = 'x';
	pairs['}'] = '{';
	pairs['['] = 'x';
	pairs[']'] = '[';
	pairs['('] = 'x';
	pairs[')'] = '(';
	string S;

	int n;
	cin >> n >> S;

	for (int i = 0; i < n; i++) {
		char c = S[i];
		if (bracs.empty()) bracs.push(c);
		else if (pairs[c] == bracs.top()) bracs.pop();
		else bracs.push(c);
	}

	if (!bracs.size()) cout << "Valid";
	else cout << "Invalid";
}
