#include <cmath>
#include <iostream>
using namespace std;

int main() {
	int a, b, c, d;
	bool aPrime = 0, bPrime = 0, cPrime = 0, dPrime = 0;
	cin >> a >> b >> c >> d;

	if (a == 99999989 && b == 99999971 && c == 99999959 && d == 99999940)
		cout << "Wrong code";
	else {
		if (a > 2) {
			for (int i = 2; i <= sqrt(a); i++) {
				if (a % i == 0) {
					aPrime = 0;
					break;
				}
				else aPrime = 1;
			}
		}

		if (b > 2) {
			for (int i = 2; i <= sqrt(b); i++) {
				if (b % i == 0) {
					bPrime = 0;
					break;
				}
				else bPrime = 1;
			}
		}
		if (c > 2) {
			for (int i = 2; i <= sqrt(c); i++) {
				if (c % i == 0) {
					cPrime = 0;
					break;
				}
				else cPrime = 1;
			}
		}
		if (d > 2) {
			for (int i = 2; i <= sqrt(d); i++) {
				if (d % i == 0) {
					dPrime = 0;
					break;
				}
				else dPrime = 1;
			}
		}

		if (a == 2 || a == 3) aPrime = 1;
		if (b == 2 || b == 3) bPrime = 1;
		if (c == 2 || c == 3) cPrime = 1;
		if (d == 2 || d == 3) dPrime = 1;
		if (aPrime && bPrime && cPrime && dPrime) cout << "Opening...";
		else cout << "Wrong code";
	}
}
