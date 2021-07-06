class Solution {
 public:
  bool rotateString(string s, string goal) {
    return s.size() == goal.size() && (s + s).find(goal) != string::npos;
  }
};
/*whether it is rotated if goal can be found in (s + s).
For example, with s = "abcde", goal = "cdeab", we have

“abcdeabcde” (s + s)
  “cdeab” (goal)
goal is found in (s + s), so goal is a rotated string of s.*/