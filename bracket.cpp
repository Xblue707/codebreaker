#include <iostream>
#include <map>
#include <stack>
using namespace std;
int main() {
	stack<char> stack;
	map<char, char> m;
	m['('] = 'x';
	m[')'] = '(';
	string S;
	int n;
	char c;
	cin >> n >> S;
	for (int x; x < n; x++) {
		c = S[x];

		if (stack.empty() == true) { stack.push(c); }
		else if (m[c] == stack.top()) {
			stack.pop();
		}
		else {
			stack.push(c);
		}
	}
	if (stack.size() == 0) { cout << "Valid"; }
	else {
		cout << "Invalid";
	}
}
