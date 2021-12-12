#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  long n, k;
  cin >> n >> k;
  vector<string> words;

  for (int i = 0; i < n; i++) {
    string word;
    cin >> word;
    words.push_back(word);
  }

  sort(words.begin(), words.end());

  for (int j = 0; j < words.size(); j++) cout << words[j];
}
