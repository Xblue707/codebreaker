#include <cmath>
#include <iostream>
using namespace std;

int main() {
	int n, k, x;
	cin >> n >> k >> x;
	for (int i = 1; i <= k; i++) {
		string xStr = std::to_string(x);
		std::size_t found = xStr.find('7');
		if (x % 7 == 0 || found != std::string::npos) cout << "UP!" << endl;
		else cout << x << endl;

		x += n;
	}
}
