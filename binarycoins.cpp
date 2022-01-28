#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long

int main() {
	ull moni;
	cin >> moni;

	int cnt = 0;
	for (ull i = 0; i < 64; ++i) {
		if (moni & (ull) ((ull) 1 << i)) cnt++;
	}
	cout << cnt;
}
