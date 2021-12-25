#include <iostream>
#include <set>
using namespace std;

int main() {
  int n, q, x, y;
  string events;
  set<int> cats;

  cin >> n >> q;

  for (int i = 0; i < q; i++) {
    cin >> events;

    if (events.compare("WAKE") == 0) {
      cin >> x;
      cats.erase(x);
    }

    else if (events.compare("SLEEP") == 0) {
      cin >> x;
      cats.insert(x);
    }

    else if (events.compare("TRANSMIT") == 0) {
      cin >> x >> y;

      if (*cats.lower_bound(x) > y || cats.lower_bound(x) == cats.end())
        cout << "YES\n";
      else cout << "NO\n";
    }
  }
}
