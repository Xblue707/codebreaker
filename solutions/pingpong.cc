#include <iostream>
using namespace std;

string winner(string S) {
	int r = 0, rw = 0, p = 0, pw = 0;
	for (auto i : S) {
		if (i == 'R') r++;
		else if (i == 'P') p++;

		if (p - r >= 2 && p >= 11) {
			pw++;
			r = p = 0;
		} else if (r - p >= 2 && r >= 11) {
			rw++;
			r = p = 0;
		}

		if (pw == 3) return "Potato";
		else if (rw == 3) return "Rar";
	}
}
