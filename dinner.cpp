#include <iostream>
#include <string>
using namespace std;

int main() {
	int h, w, o = 0, p = 0;
	cin >> h >> w;

	for (int i = 0; i < h * w; i++) {
		char a;
		cin >> a;
		if (a == 'O') o++;
		else if (a == 'N') p++;
	}

	cout << o << ' ' << p << '\n';
}
