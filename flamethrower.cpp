#include <cmath>
#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	long long N, K;
	cin >> N >> K;
	long long t[N], x, y = 0;

	for (int i = 0; i < N; i++) { cin >> t[i]; }
	for (int i = 0; i < (N - K + 1); i++) {
		long long tt = 0;
		for (int j = 0; j < K; j++) { tt += t[i + j]; }
		if (tt > y) {
			x = i;
			y = tt;
		}
	}
	cout << y;
}
