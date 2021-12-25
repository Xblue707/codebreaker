#include <iostream>
using namespace std;

int main() {
	int n, s, e;
	cin >> n >> s >> e;

	for (; s <= e; s++) {
		if (s % n == 0) cout << s << '\n';
	}
}
