#include <iostream>
using namespace std;

int main() {
  int rating;
  cin >> rating;

  if (rating < 3) cout << "That's a terrible potato!";
  else if (rating <= 5) cout << "That's a normal potato!";
  else if (rating <= 8) cout << "That's a good potato!";
  else cout << "OMG POTATOES!!!";
}
