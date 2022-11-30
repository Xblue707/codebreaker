#include <bits/stdc++.h>
using namespace std;
#define loop(i, n) for (int i = 0; i < n; ++i)
#define dloop(i, n) for (int i = n; i >= 0; i--)
#define ll long long
#define INF 1010000000
#define pll pair<long long, long long>

int main() {
  ll n, k, curr, mod, inv;
  cin >> n >> k;
  vector<int> arr(k);
  loop(i, k) arr[i] = 0;
  ll ans = 0;
  for (int i = 0; i < n; i++) {
    cin >> curr;
    mod = curr % k;
    ans += (curr - mod) / k;
    arr[mod] += 1;
  }
  for (int i = k - 1; i > 0; i--) {
    if (arr[i]) {
      for (inv = k - i; inv < k and arr[i] > 0; inv++) {
        if (inv == i) {
          while (arr[i] > 1) {
            ans++;
            arr[i]--;
            arr[inv]--;
          }
        } else if (arr[inv]) {
          while (arr[i] > 0 and arr[inv] > 0) {
            ans++;
            arr[i]--;
            arr[inv]--;
          }
        }
      }
    }
  }
  cout << ans;
}
