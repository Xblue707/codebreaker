// pascal 
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

ull C(ull N, ull K) {
	ull n = N-1, k = K-1;	
	ull p = 1, s = 1;
	if (n - k < k) k = n - k;
	if (k != 0) {
		while (k) {
			p *=n; s *= k;
			ull m = __gcd(p, s);
			p/=m; s/=m;
			n--; k--;
		}
	} else p = 1;
	return p;
}

int main() {
	ull n, k;
	cin >> n >> k;
	cout << C(n, k);
}
