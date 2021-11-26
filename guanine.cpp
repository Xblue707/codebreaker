#include <bits/stdc++.h>
using namespace std;

deque<char> gene; // Stores the characters in gene

void addBack(char x) { gene.push_back(x); }

void addFront(char x) { gene.push_front(x); }

void snipBack(int y) { gene.erase(gene.begin() + y + 1, gene.end()); }

void snipFront(int y) { gene.erase(gene.begin(), gene.begin() + y + 1); }


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n = 0;
	string instruction = "";
	deque<char> result;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> instruction;
		if (instruction.compare("ADD_BACK") == 0) {
			char dna = '0';
			cin >> dna;
			addBack(dna);
		}
		else if (instruction.compare("ADD_FRONT") == 0) {
			char dna = '0';
			cin >> dna;
			addFront(dna);
		}
		else if (instruction.compare("SNIP_BACK") == 0) {
			int Y = 0;
			cin >> Y;
			snipBack(Y);
		}
		else if (instruction.compare("SNIP_FRONT") == 0) {
			int Y = 0;
			cin >> Y;
			snipFront(Y);
		}
		else if (instruction.compare("QUERY") == 0) {
			int Z = 0;
			cin >> Z;
			result.push_back(gene[Z]);
		}
	}

	for (deque<char>::iterator it = result.begin(); it != result.end(); ++it) {
		cout << *it << "\n";
	}
}
