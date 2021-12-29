#include <algorithm>
#include <iostream>
#include <string> // stoi
using namespace std;

int main() {
	string num;
	cin >> num;
	int oddDigits = 0, evenDigits = 0;

	for (int i = 0; i < num.size(); i++) {
		int n = (int) num[i] - 48;
		if (i % 2 == 0) evenDigits += n;
		else oddDigits += n;
	}

	if ((max(oddDigits, evenDigits) - min(oddDigits, evenDigits)) % 11 == 0)
		cout << "YES";
	else cout << "NO";
}
