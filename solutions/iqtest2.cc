/*
  * EDITORIAL: iqtest2

  * This problem actually doesn't rely on the concept of modular arithmetic.
  * The simplest way to figure out a pattern is to brute-force values from
  * 0 to 20.

  ```
  ll t, p, k;
  cin >> t;
  for (ll i = 0; i < 20; ++i) {
    for (ll j = 0; j < 20; ++j) {
      ll s = 0;
      for (ll br = 1; br < i + 1; ++br) {
        s += pw(br, j, i);
        s %= i;
      }
      cout << s << ' ';
    }
    cout << '\n';
  }
  ```

  * where `pw` is the power function.

  * Eliminating all the non-prime entries,
  * you may notice that for every prime number,
  * it only displays p - 1 (where p is the prime) at every interval
  * of p - 2. The rest of the values are all 0.

  * This now means that if k, the exponent, is divisible by p - 1,
  * you should output, simply, p - 1.
  * If not, as shown by the brute-force method, you should output 0.
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll pw(ll a, ll b, ll mo) {
  ll s = 1;
  for (int i = 0; i < b; ++i) {
    s *= a;
    s %= mo;
  }
  return s;
}

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  // ll t, p, k;
  // cin >> t;
  // for (ll i = 0; i < 20; ++i) {
  // 	for (ll j = 0; j < 20; ++j) {
  // 		ll s = 0;
  // 		for (ll br = 1; br < i + 1; ++br) {
  // 			s += pw(br, j, i);
  // 			s %= i;
  // 		}
  // 		cout << s << ' ';
  // 	}
  // 	cout << '\n';
  // }

  ll t;
  cin >> t;

  for (ll i = 0; i < t; ++i) {
    ll p, k;
    cin >> p >> k;
    if (k == 0)
      cout << 0;
    else if (k % (p - 1) == 0)
      cout << p - 1;
    else
      cout << 0;
    cout << '\n';
  }
}
