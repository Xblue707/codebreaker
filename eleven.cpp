#include <algorithm>
#include <iostream>
#include <string> // stoi
using namespace std;

int main() {
	string num;
	cin >> num;
	int odd = 0, even = 0;

	for (int i = 0; i < num.size(); i++) {
		int n = num[i] - 48;
		if (i % 2 == 0) even += n;
		else odd += n;
	}

	if ((max(odd, even) - min(odd, even)) % 11 == 0) cout << "YES";
	else cout << "NO";
}
