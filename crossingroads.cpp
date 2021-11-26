#include <iostream>
using namespace std;

int main() {
	int l, s, h;
	cin >> l >> s >> h;
	int sumDist1 = 2 * l - s - h;
	int sumDist2 = s + h;

	if (sumDist1 < sumDist2) cout << sumDist1;
	else cout << sumDist2;
}
