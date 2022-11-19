#include <algorithm>
#include <iostream>
#include <stack>
#include <string>
#include <utility>
#include <vector>
using namespace std;

int main() {
	stack<int> lvm;
	int reg = 0, value, top;
	string inst;
	vector<pair<string, int>> cmds;
	int index = 0, length;
	cin >> length;
	for (int i = 0; i < length; i++) {
		cin >> inst;
		if ((inst.compare("PUSH") == 0) || (inst.compare("IFZERO") == 0)) {
			cin >> value;
			auto p1 = make_pair(inst, value);
			cmds.push_back(p1);
		} else {
			auto p1 = make_pair(inst, 0);
			cmds.push_back(p1);
		}
	}

	while (1) {
		inst = cmds[index].first;

		if (inst.compare("DONE") == 0) {
			int x = 0;
			while (!lvm.empty()) {
				x += lvm.top();
				lvm.pop();
			}
			cout << x;
			break;
		} else if (inst.compare("IFZERO") == 0) {
			top = lvm.top();
			lvm.pop();
			if (top == 0)
				index = cmds[index].second;
			else {
				index++;
			}
		} else {
			if (inst.compare("PUSH") == 0) lvm.push(cmds[index].second);

			if (inst.compare("STORE") == 0) {
				reg = lvm.top();
				lvm.pop();
			}

			else if (inst.compare("LOAD") == 0)
				lvm.push(reg);

			else if (inst.compare("TIMES") == 0) {
				top = lvm.top();
				lvm.pop();
				top = top * lvm.top();
				lvm.pop();
				lvm.push(top);
			}

			else if (inst.compare("PLUS") == 0) {
				top = lvm.top();
				lvm.pop();
				top = top + lvm.top();
				lvm.pop();
				lvm.push(top);
			}

			index++;
		}
	}
}
