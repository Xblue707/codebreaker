#include <bits/stdc++.h>
using namespace std;

struct node {
	int S, E, val;
	node *left, *right;
	node(int _s, int _e) : S(_s), E(_e) {
		if (S == E) return;
		int M = (S + E) / 2;
		left = new node(S, M);
		right = new node(M + 1, E);
	}

	void update(int p, int v) {
		if (S == E) {
			val = v;
			return;
		}
		int M = (S + E) / 2;
		if (p <= M)
			left->update(p, v);
		else
			right->update(p, v);
		val = min(left->val, right->val);
	}

	int query(int qs, int qe) {
		if (qs <= S && E <= qe)
			return val;
		else if (S > qe || qs > E)
			return INT_MAX;
		return min(left->query(qs, qe), right->query(qs, qe));
	}
} *root;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, q, a, b, c;
	cin >> n >> q;
	auto tree = new node(0, n - 1);

	for (int i = 0; i < q; ++i) {
		cin >> a >> b >> c;
		if (a == 1) {
			tree->update(b, c);
		} else if (a == 2) {
			cout << tree->query(b, c) << '\n';
		}
	}
}
