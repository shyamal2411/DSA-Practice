class Solution {
 public:
  bool isPalindrome(string s) {
    int i = 0, j = 0;
    for (i = 0, j = s.size() - 1; i < j; i++, j--) {
      while (isalnum(s[i]) == false && i < j)
        i++;
      while (isalnum(s[j]) == false && i < j)
        j--;
      if (toupper(s[i]) != toupper(s[j]))
        return false;
    }
    return true;
  }
};
/*
in for loop, first move 2 pointers from opposite direction until they collide.
increment left pointer, if not alphanumeric -isalnum stands for is alphanumeric
similarly, decrement right pointer if not alphanumeric
exit the moment they don't match.
*/