#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int a;
	cin >> a;
	string arr[a];
	vector<string> v;

	for (int i = 0; i < a; i++) cin >> arr[i];
	sort(arr, arr + a);
	for (int c = 0; c < a; c++) {
		if (!v.empty()) {
			if (v[v.size() - 1] != arr[c]) v.push_back(arr[c]);
		}
		else v.push_back(arr[c]);
	}
	cout << v.size();
}
