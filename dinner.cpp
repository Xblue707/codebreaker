#include <iostream>
#include <string>
using namespace std;
int main() {
	int h, w, oCount = 0, pCount = 0;
	cin >> h >> w;
	for (int i = 0; i < h * w; i++) {
		char a;
		cin >> a;
		if (a == 'O') { oCount++; }
		else if (a == 'N') {
			pCount++;
		}
	}
	cout << oCount << " " << pCount << endl;
}
