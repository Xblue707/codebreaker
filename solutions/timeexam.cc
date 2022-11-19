#include <bits/stdc++.h>
using namespace std;
int main() {
	long long n;
	cin >> n;
	if (n < 60)
		printf("00%02lli", n);
	else {
		long long m = n % 60;
		long long h = n / 60;
		if (h >= 24) h %= 24;
		printf("%02lli%02lli", h, m);
	}
}
