#include <iostream>
#include <string>
using namespace std;
int main() {
	int n, wordLength = 0;
	cin >> n;
	string shortestWord = "";
	for (int i = 1; i <= n; i++) {
		string s;
		cin >> s;
		if (i == 1) {
			wordLength = s.size();
			shortestWord = s;
		}
		else {
			if (s.size() < wordLength) {
				wordLength = s.size();
				shortestWord = s;
			}
		}
	}
	cout << shortestWord;
}
