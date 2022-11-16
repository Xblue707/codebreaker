#include <bits/stdc++.h>
using namespace std;
int main() {
	const int MAXN = 100000;
	int N, X[MAXN], Y[MAXN];
	cin >> N;
	for (int i = 0; i < N; ++i) {
		cin >> X[i] >> Y[i];
	}
	sort(X, X + N);
	sort(Y, Y + N);
	cout << X[N / 2] << " " << Y[N / 2] << endl;
}
