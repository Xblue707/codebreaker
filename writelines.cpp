#include <iostream>
using namespace std;
int main() {
	int a;
	string str;
	cin >> a;
	cin.ignore();
	getline(cin, str);
	for (int b = 0; b < a; b++) cout << str << '\n';
}
