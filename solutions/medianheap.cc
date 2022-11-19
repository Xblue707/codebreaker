#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type, less_equal<int>, rb_tree_tag,
						 tree_order_statistics_node_update>
		ordered_set;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ordered_set o;

	int cnt = 0;
	int n;
	cin >> n;
	while (n--) {
		string s;
		cin >> s;
		if (s == "PUSH") {
			int x;
			cin >> x;
			o.insert(x);
			cnt++;
		} else {
			if (cnt & 1) {
				ordered_set::iterator it = o.find_by_order(cnt / 2);
				o.erase(it);
			} else {
				ordered_set::iterator it = o.find_by_order(cnt / 2 - 1);
				o.erase(it);
			}
			cnt--;
		}
	}
	for (auto j : o) cout << j << ' ';
	cout << '\n';
}
