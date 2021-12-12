#include <bits/stdc++.h>
using namespace std;

string winner(string S) {
  int r_count = 0, r_wins = 0, p_count = 0, p_wins = 0;
  for (int i = 0; i < S.size(); i++) {
    if (S[i] == 'R') r_count++;
    else if (S[i] == 'P') p_count++;

    if (p_count - r_count >= 2 && p_count >= 11) {
      p_wins++;
      r_count = p_count = 0;
    }

    else if (r_count - p_count >= 2 && r_count >= 11) {
      r_wins++;
      r_count = p_count = 0;
    }
    if (p_wins == 3) return "Potato";
    else if (r_wins == 3) return "Rar";
  }
}
