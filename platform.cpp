#include <iostream>
using namespace std;
int main() {
	char left = '/', right = '\\';
	int spacesBtwn = 0, spacesBefore = 0;
	int n;
	cin >> n;
	spacesBefore = n - 1;
	// top half
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < spacesBefore; j++) cout << ' ';
		cout << left;
		for (int k = 0; k < spacesBtwn; k++) cout << ' ';
		cout << right << '\n';
		spacesBtwn += 2; // for every level 2 more spaces are added in between left and right
		spacesBefore--;
	}

	spacesBtwn -= 2;
	spacesBefore++;
	// bottom half
	for (int i = n; i > 0; i--) {
		for (int j = 0; j < spacesBefore; j++) cout << ' ';
		cout << right;
		for (int k = 0; k < spacesBtwn; k++) cout << ' ';
		cout << left << '\n';
		spacesBtwn -= 2;
		spacesBefore++;
	}
}
