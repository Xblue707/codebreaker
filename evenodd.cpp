#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<string> list;
	vector<char> digits = {'0', '2', '4', '6', '8'};
	for (int i = 0; i < n; i++) {
		string a;
		cin >> a;
		if (find(digits.begin(), digits.end(), a.back()) != digits.end())
			list.push_back("even");
		else list.push_back("odd");
	}

	for (auto j : list) cout << j << '\n';
}
