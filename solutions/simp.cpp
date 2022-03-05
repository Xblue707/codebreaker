#include <bits/stdc++.h>
using namespace std;

#define lg long
#define ll long long
#define ull unsigned long long

#define loop(var, start, end) for (auto var = start; var < end; ++var)
#define dloop(var, start, end) for (auto var = start; var > end; --var)
#define iloop(var, st) for (auto var : st)

int main() {
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios_base::sync_with_stdio(false);

	ll n, a1, a2, b1, b2, c1, c2;
	cin >> n >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;

	if (((b1 < a1 && c1 < a1) || (b1 > a1 && c1 > a1)) && ((b2 < a2 && c2 < a2) || (b2 > a2 && c2 > a2)))
		cout << "YES";
	else cout << "NO";
}
