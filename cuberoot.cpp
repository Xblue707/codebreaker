#include <iostream>
using namespace std;

double diff(double n, double mid) {
	if (n > (mid * mid * mid)) return (n - (mid * mid * mid));
	else return ((mid * mid * mid) - n);
}

double cubicRoot(double n) {
	double start = 0, end = n;

	double e = 0.0000001;

	while (true) {
		double mid = (start + end) / 2;
		double error = diff(n, mid);

		if (error <= e) return mid;
		if ((mid * mid * mid) > n) end = mid;
		else start = mid;
	}
}

int main() {
	double nos[100000];
	long long t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		long long n;
		cin >> n;
		nos[i] = n;
	}

	for (int j = 0; j < t; j++) { cout << cubicRoot(nos[j]) << '\n'; }
}
