#include <cmath>
#include <iostream>
using namespace std;
int main() {
	string bin;
	cin >> bin;

	int highestPow = bin.size() - 1;
	unsigned long long ans = 0;
	for (int j = 0; j < bin.size(); j++) {
		if (bin[j] == '0') ans += 0;
		else if (bin[j] == '1') {
			int plusFac = pow(2, highestPow);
			ans += plusFac;
		}

		highestPow--;
	}

	cout << ans;
}
