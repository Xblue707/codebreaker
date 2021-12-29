#include <cmath>
#include <iostream>
using namespace std;

int main() {
	string bin;
	cin >> bin;

	int expo = bin.size() - 1;
	unsigned long long ans = 0;

	for (int j = 0; j < bin.size(); j++) {
		if (bin[j] == '1') ans += pow(2, expo);
		expo--;
	}

	cout << ans;
}
