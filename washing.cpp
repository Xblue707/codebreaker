#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<string> cmds;
	int s, n;
	cin >> s >> n;

	int dirty = 0, total = s;

	for (int i = 0; i < n; i++) {
		string cmd;
		cin >> cmd;
		cmds.push_back(cmd);
	}

	for (int j = 0; j < cmds.size(); j++) {
		if (cmds[j] == "USE") {
			dirty++;
			s--;

			if (dirty > total) {
				cout << "DIRTY";
				break;
			}
		}
		else if (cmds[j] == "WASH") {
			dirty = 0;
			s = total;
		}
	}
	if (dirty <= total) cout << "CLEAN";
}
