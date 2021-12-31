#include <algorithm>
#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int arr[2];
	cin >> arr[0] >> arr[1];

	int a = max(arr[0], arr[1]), b = min(arr[0], arr[1]);

	while (a != b) {
		if (a > b) a -= b;
		else b -= a;
	}
	cout << a;
}
