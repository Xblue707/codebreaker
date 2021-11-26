#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	int current = 0, maximum = 0;

	for (int i = 0; i < n; i++) {
		char x;
		cin >> x;

		int currentPoints;
		// check if c is a digit - therefore not a mudball
		if (isdigit(x))
			currentPoints = x - '0'; // convert char to an integer value using ASCII
		else currentPoints = -2; // if mudball found

		current = max(current + currentPoints, currentPoints); // find the most optimum
		maximum = max(current, maximum);
	}

	cout << maximum;
}
