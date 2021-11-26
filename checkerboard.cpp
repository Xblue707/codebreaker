#include <iostream>
using namespace std;

int main() {
	int i, j, rows;
	char b, w, t;
	b = 'o';
	w = 'x';

	cin >> rows;
	for (i = 1; i <= rows; i++) {
		for (j = 1; j <= rows; j++) {
			if (j % 2 != 0) { cout << b; }
			else if (j % 2 == 0) {
				cout << w;
			}
		}
		t = b;
		b = w;
		w = t;
		cout << '\n';
	}
}
