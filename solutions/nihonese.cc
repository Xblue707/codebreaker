#include <bits/stdc++.h>
using namespace std;

bool vowel(char x) {
	char a[] = {'a', 'e', 'i', 'o', 'u', 'n'};
	return find(begin(a), end(a), x) != end(a);
}

bool check(string x, int l) {
	// bool flag = 1;
	for (int i = 0; i < l - 1; ++i) {
		if (!vowel(x[i]) && ((!vowel(x[i + 1])) || (x[i + 1] == 'n')))
			return 0;
		else
			continue;
	}
	if (!vowel(x[l - 1])) return 0;
	return 1;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	cin >> n >> m;
	string a, b;
	cin >> a >> b;

	// cout << check(a, n) << ' ' << check(b, m);
	switch (check(a, n) + check(b, m)) {
		case 0:
			cout << "zero";
			break;
		case 1:
			cout << "wan";
			break;
		case 2:
			cout << "su";
			break;
	}
}
