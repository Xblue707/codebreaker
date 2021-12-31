#include <cmath>
#include <iostream>
#include <string>
using namespace std;

int main() {
	int n, k, x;
	cin >> n >> k >> x;
	for (int i = 0; i < k; i++) {
		string s = to_string(x);
		if (x % 7 == 0 || s.find('7') != string::npos) cout << "UP!\n";
		else cout << x << '\n';

		x += n;
	}
}
