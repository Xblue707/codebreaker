#include <iostream>
#include <locale>
#include <regex>
#include <vector>

using namespace std;
int main() {
	bool yes = 0;
	int n;
	cin >> n;
	vector<string> nums;

	for (int i = 0; i < n; i++) {
		string num;
		cin >> num;
		num.erase(num.begin());
		nums.push_back(num);
	}

	for (int j = 0; j < nums.size(); j++) {
		for (int k = 1; k < nums[j].size(); k++) {
			if (isxdigit(nums[j][k])) { yes = 1; }
			else {
				yes = 0;
				break;
			}
		}

		if (yes) cout << "Hexadecimal\n";
		else cout << "Not Hexadecimal\n";
	}
}
