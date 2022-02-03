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

	string str1, str2;
	cin >> str1 >> str2;

	if (str1 == str2) {
		cout << "Yes";
		return 0;
	} else {
		loop(i, 0, str1.length()) {
			if (str1[i] != str2[i] && ((str1[i + 1] == str2[i]) && (str2[i + 1] == str1[i]))) {
				cout << "Yes";
				return 0;
			}
		}
	}

	cout << "No";
	return 0;
}
