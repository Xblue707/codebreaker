#include <bits/stdc++.h>

#define lg long
#define ll long long
#define ull unsigned long long

#define loop(var, start, end) for (auto var = start; var < end; ++var)
#define dloop(var, start, end) for (auto var = start; var > end; --var)
#define iloop(var, st) for (auto var : st)

int main() {
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	std::ios_base::sync_with_stdio(false);

	std::string str1, str2;
	std::cin >> str1 >> str2;

	if (str1 == str2) {
		std::cout << "Yes";
		return 0;
	} else {
		loop(i, 0, str1.length()) {
			if (str1[i] != str2[i] && ((str1[i + 1] == str2[i]) && (str2[i + 1] == str1[i]))) {
				std::cout << "Yes";
				return 0;
			}
		}
	}

	std::cout << "No";
	return 0;
}
