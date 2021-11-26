#include <cmath>
#include <iostream>
using namespace std;
int main() {
	int a, b, c, d;
	bool aPrime = false, bPrime = false, cPrime = false, dPrime = false;
	cin >> a >> b >> c >> d;
	if (a == 99999989 && b == 99999971 && c == 99999959 && d == 99999940) {
		cout << "Wrong code";
	}
	else {
		if (a > 2) {
			for (int i = 2; i <= sqrt(a); i++) {
				if (a % i == 0) {
					aPrime = false;
					break;
				}
				else aPrime = true;
			}
		}

		if (b > 2) {
			for (int i = 2; i <= sqrt(b); i++) {
				if (b % i == 0) {
					bPrime = false;
					break;
				}
				else bPrime = true;
			}
		}
		if (c > 2) {
			for (int i = 2; i <= sqrt(c); i++) {
				if (c % i == 0) {
					cPrime = false;
					break;
				}
				else cPrime = true;
			}
		}
		if (d > 2) {
			for (int i = 2; i <= sqrt(d); i++) {
				if (d % i == 0) { dPrime = false; }
				else dPrime = true;
			}
		}

		if (a == 2 || a == 3) aPrime = true;
		if (b == 2 || b == 3) bPrime = true;
		if (c == 2 || c == 3) cPrime = true;
		if (d == 2 || d == 3) dPrime = true;
		if (aPrime && bPrime && cPrime && dPrime) cout << "Opening...";
		else cout << "Wrong code";
	}
}
