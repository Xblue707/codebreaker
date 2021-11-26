#include <iostream>
#include <string>
using namespace std;
int main() {
	string s;
	getline(cin, s);
	if (s != "Hello World") cout << "Wrong Answer";
	if (s == "Hello World") cout << "OK";
}
