#include <bits/stdc++.h>
#include <cstdio>
using namespace std;


long double test() {
	long double c, f, x;
	cin >> c >> f >> x;
	long double result = 0, rate = 2;
	while ((c / rate + x / (rate + f)) < (x / rate)) {
		result += c / rate;
		rate += f;
	}
	return result + (x / rate);
}

int main() {
	int t;
	cin >> t;
	long double ans[t];

	for (int i = 1; i <= t; i++) { ans[i - 1] = test(); }

	for (int j = 0; j < t; j++) {
		// cout << "Case #" << j + 1 << ": " << ans[j] << '\n';
		printf("Case #%i: %.7Lf\n", j + 1, ans[j]);
	}
}
