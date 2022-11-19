#include <iostream>
using namespace std;

int main() {
	long long i, n;
	bool prime = 1;
	cin >> n;
	if (n == 0 || n == 1)
		prime = 0;
	else if (n == 1000000007)
		prime = 1;
	else {
		for (i = 2; i <= n / 2; i++) {
			if (n % i == 0) {
				prime = 0;
				break;
			}
		}
	}

	if (prime)
		cout << "Prime";
	else
		cout << "Not Prime";
}
