#include <iostream>
using namespace std;
int main() {
	int n;
	string s;
	cin >> n >> s;
	for (int j = 1; j <= n; j++) {
		for (int k = 0; k < j - 1; k++) cout << ' ';
		cout << s << '\n';
	}
}
