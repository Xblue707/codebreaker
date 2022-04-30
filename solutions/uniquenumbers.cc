#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	string arr[n];
	vector<string> v;

	for (int i = 0; i < n; i++) cin >> arr[i]; // get all the integers
	sort(arr, arr + n);

	for (int c = 0; c < n; c++) {
		if (!v.empty()) {
			// if the previous element wasn't already added, add that element
			if (v[v.size() - 1] != arr[c]) v.push_back(arr[c]);
		} else v.push_back(arr[c]); // if it's the first element, just push_back
	}
	cout << v.size(); // get the number of integers that remain
}
