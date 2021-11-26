#include <bits/stdc++.h>
using namespace std;

int a[300000];

bool cmp(int x, int y) { return x > y; }

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];

	sort(a, a + n, cmp);
	int champions = 0, comp = 0;

	for (int i = 0; i < n; i++) {
		champions += (a[i] + n >= comp);
		comp = max(comp, a[i] + i + 1);
	}

	cout << champions;
}
