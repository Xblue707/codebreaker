#include <iostream>
using namespace std;

int main() {
	int n, pigeons = 0, events;
	cin >> n >> events;
	bool fenceBreak = 0, ultimate = 0;
	for (int i = 0; i < events; i++) {
		string s;
		cin >> s;
		if (s == "LAND") pigeons++;
		else if (s == "LEAVE") pigeons--;
		else if (s == "EVACUATE") pigeons = 0;


		if (pigeons > n) {
			fenceBreak = true;
			ultimate = true;
		} else fenceBreak = false;
	}
	if (ultimate) cout << "PLAN REJECTED";
	else if (!fenceBreak) cout << "PLAN ACCEPTED";
}
