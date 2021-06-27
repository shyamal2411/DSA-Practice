class Solution {
 public:
  bool judgeCircle(string moves) {
    int l = moves.size();
    int up = 0, down = 0, left = 0, right = 0;

    for (int i = 0; i < l; i++) {
      if (moves[i] == 'U')
        up++;
      if (moves[i] == 'D')
        down++;
      if (moves[i] == 'R')
        right++;
      if (moves[i] == 'L')
        left++;
    }
    if ((up - down) == 0 && (right - left) == 0)
      return true;
    else
      return false;
  }
};