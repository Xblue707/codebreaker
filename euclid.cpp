#include <iostream>
using namespace std;

int main() {
	int array[2];

	for (int i = 0; i < 2; i++) cin >> array[i];

	int n1 = max(array[0], array[1]);
	int n2 = min(array[0], array[1]);

	while (n1 != n2) {
		if (n1 > n2) n1 -= n2;
		else n2 -= n1;
	}
	cout << n1;
}
