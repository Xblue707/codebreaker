#include <bits/stdc++.h>
using namespace std;

#define lg long
#define ll long long
#define ull unsigned long long

#define loop(var, start, end) for (auto var = start; var < end; ++var)
#define dloop(var, start, end) for (auto var = start; var > end; --var)
#define iloop(var, st) for (auto var : st)

int main() {
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios_base::sync_with_stdio(false);

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
