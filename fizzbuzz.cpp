#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
	long s, e, a, b;
	cin >> s >> e >> a >> b;
	for (; s <= e; s++) {
		if (s % a == 0 && s % b == 0) cout << "FizzBuzz";
		else if (s % a == 0) cout << "Fizz";
		else if (s % b == 0) cout << "Buzz";
		else cout << s;

		cout << '\n';
	}
}
