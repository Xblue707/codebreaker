#include <bits/stdc++.h>
using namespace std;
int main() {
	map<string, int> scoresNames;
	int n, total = 0, avg = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string name1;
		int score;
		cin >> name1 >> score;
		scoresNames[name1] = score;
	}
	int m;
	cin >> m;
	for (int j = 0; j < m; j++) {
		string name;
		cin >> name;
		total += scoresNames.find(name)->second;
	}
	avg = total / m;
	cout << avg;
}
