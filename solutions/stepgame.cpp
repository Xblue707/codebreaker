#include <algorithm>
#include <climits>
#include <iostream>
using namespace std;

int n, answer = INT_MAX, A[1000005], dp[1000005];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	// get stuff set up from user input
	cin >> n;
	for (int i = 0; i < n; i++) cin >> A[i];
	// algorithm begins
	for (int j = 0; j < n; j++) {
		dp[j] = min(dp[j - 1] + A[j], A[j]);
		answer = min(answer, dp[j]);
	}
	cout << answer;
}
