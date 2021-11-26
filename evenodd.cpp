#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector<string> evenOddList;
	vector<int> evenDigits = {'0', '2', '4', '6', '8'};
	for (int i = 1; i <= n; i++) {
		string a;
		cin >> a;
		if (find(evenDigits.begin(), evenDigits.end(), a.back()) != evenDigits.end()) {
			evenOddList.push_back("even");
		}
		else {
			evenOddList.push_back("odd");
		}
	}
	for (int j = 0; j < evenOddList.size(); j++) {
		cout << evenOddList[j] << endl;
	}
}
