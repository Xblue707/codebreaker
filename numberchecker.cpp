#include <cctype>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <locale>
using namespace std;
bool isNumber = false;

int main() {
	string s;
	cin >> s;

	for (int i = 0; i < s.size(); i++) {
		if (std::isdigit(s[i])) { isNumber = true; }
		else {
			isNumber = false;
			break;
		}
	}

	if (isNumber) { cout << std::stoi(s) * 2; }
	else {
		for (int i = 0; i < s.size(); i++) { putchar(toupper(s[i])); }
	}
}
