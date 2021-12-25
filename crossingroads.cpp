#include <algorithm>
#include <iostream>
using namespace std;

int main() {
	int l, s, h;
	cin >> l >> s >> h;
	int d1 = 2 * l - s - h, d2 = s + h;
	cout << min(d1, d2);
}
