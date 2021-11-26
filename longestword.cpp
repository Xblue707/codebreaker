#include <iostream>
#include <string>
using namespace std;
int main() {
	int n, wordLength = 0;
	cin >> n;
	string longestWord;
	for (int i = 1; i <= n; i++) {
		string s;
		cin >> s;
		if (wordLength < s.size()) {
			wordLength = s.size();
			longestWord = s;
		}
	}
	cout << longestWord;
}
