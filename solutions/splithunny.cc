#include <iostream>
#include <vector>
using namespace std;

int main() {
	int r, c, count = 0, x, y;
	char s;
	cin >> r >> c;
	vector<vector<int>> g;
	vector<pair<int, int>> cors;

	for (int i = 0; i < r; i++) {
		vector<int> v;

		for (int j = 0; j < c; j++) {
			cin >> s;
			if (s == '.')
				v.push_back(0);
			else
				v.push_back(-1);
		}

		g.push_back(v);
	}

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			if (g[i][j] == -1) {
				count++;
				pair<int, int> p(i, j);
				cors.push_back(p);
				g[i][j] = count;

				while (cors.size() > 0) {
					pair<int, int> cur = cors[cors.size() - 1];
					x = cur.first;
					y = cur.second;
					int before = cors.size();

					if (x < r - 1) {
						if (g[x + 1][y] == -1) {
							cors.push_back(make_pair(x + 1, y));
							g[x + 1][y] = count;
						}
					}

					if (x > 0) {
						if (g[x - 1][y] == -1) {
							cors.push_back(make_pair(x - 1, y));
							g[x - 1][y] = count;
						}
					}

					if (y < c - 1) {
						if (g[x][y + 1] == -1) {
							cors.push_back(make_pair(x, y + 1));
							g[x][y + 1] = count;
						}
					}

					if (y > 0) {
						if (g[x][y - 1] == -1) {
							cors.push_back(make_pair(x, y - 1));
							g[x][y - 1] = count;
						}
					}

					if (cors.size() == before) cors.pop_back();
				}
			}
		}
	}
	cout << "Oh, bother. There are " << count << " pools of hunny.\n";
}
