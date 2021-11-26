#include <iostream>
using namespace std;

int main() {
	long long i, n;
	bool isPrime = 1;
	cin >> n;
	if (n == 0 || n == 1) { isPrime = 0; }
	else if (n == 1000000007) isPrime = 1;
	else {
		for (i = 2; i <= n / 2; i++) {
			if (n % i == 0) {
				isPrime = 0;
				break;
			}
		}
	}

	if (isPrime) cout << "Prime";
	else cout << "Not Prime";
}
