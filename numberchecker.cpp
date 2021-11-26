#include <cctype>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <locale>
using namespace std;
bool isNumber = false;
int main(void) {
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (std::isdigit(s[i])) { isNumber = true; }
		else {
			isNumber = false;
			break;
		}
	}
	if (isNumber) {
		int num = std::stoi(s);
		int ans = num * 2;
		cout << ans;
	}
	else {
		for (int i = 0; i < s.size(); i++) { putchar(toupper(s[i])); }
	}
}
