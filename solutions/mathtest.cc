// mathtest
#include <bits/stdc++.h>
using namespace std;
typedef long int li;
typedef long long int ll;
typedef long double ld;
typedef unsigned long long int ull;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
#define rep(x, start, end) \
  for (auto x = (start) - ((start) > (end)); x != (end) - ((start) > (end)); \
       ((start) < (end) ? x++ : x--))
#define each(i, v) for (auto i : (v))
#define fast \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);
#define nl '\n'
#define pr pair
#define vc vector
#define dq deque
#define qu queue
#define pq priority_queue
#define mp map
#define fi first
#define se second
#define all(c) (c).begin(), (c).end()
#define sz(c) (ll)(c.size())
#define pub push_back
#define pob pop_back
#define mpr make_pair
mt19937 rng(chrono::system_clock::now().time_since_epoch().count());

#define MAX 1400000
vi primes;

// all the digits, in words
vc<string> ones = {"",     "one", "two",   "three", "four",
                   "five", "six", "seven", "eight", "nine"};
vc<string> tens = {"",      "ten",   "twenty",  "thirty", "forty",
                   "fifty", "sixty", "seventy", "eighty", "ninety"};
vc<string> teens = {"ten",     "eleven",  "twelve",    "thirteen", "fourteen",
                    "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};

void sieve(vi &v) {
  bool isprime[MAX];
  memset(isprime, true, sizeof(isprime));
  for (int i = 2; i * i < MAX; i++) {
    if (isprime[i]) {
      for (int j = i * i; j < MAX; j += i) {
        isprime[j] = false;
      }
    }
  }
  for (int p = 2; p < MAX; p++)
    if (isprime[p]) v.pub(p);
}

string convert(int num) {
  string ans = "";
  if (num > 999999) {
    ans += "one million ";
    num %= 1000000;
    ans += convert(num);
  } else if (num > 99999) {
    ans += convert(num / 100000);
    ans += "hundred ";
    num %= 100000;
    ans += convert(num);
  } else if (num > 999) {
    ans += convert(num / 1000);
    ans += "thousand ";
    num %= 1000;
    ans += convert(num);
  } else if (num > 99) {
    ans += convert(num / 100);
    ans += "hundred ";
    num %= 100;
    ans += convert(num);
  } else if (num > 19) {
    ans += tens[num / 10];
    ans += " ";
    num %= 10;
    ans += convert(num);
  } else if (num > 9) {
    ans += teens[num % 10];
    ans += " ";
  } else {
    ans += ones[num];
    ans += " ";
  }
  return ans;
}

int main() {
  fast;
  int n, s;
  cin >> n >> s;

  sieve(primes); // conduct sieve of whoever

  // convert the ans
  string ans = convert(primes[n - 1]);
  cin.ignore();

  rep(i, 0, s) {
    string x;
    getline(cin, x); // input can include spaces
    x[0] = tolower(x[0]); // convert it to smol letters to process more easily
    x += ' ';
    if (x != ans)
      cout << "Wrong!" << nl;
    else
      cout << "Correct!" << nl;
  }
}
