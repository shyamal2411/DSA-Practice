class Solution {
 public:
  int sumBase(int n, int k) {
    int ans = 0;
    while (n) {
      ans = ans + n % k;
      n = n / k;
    }
    return ans;
  }
};

/*
Suppose number given is n = 9, to convert it into base 2 we are going to follow:
9%2 = 1, n = 9/2 -> n = 4
4%2 = 0, n = 4/2 -> n = 2
2%2 = 0, n = 2/2 -> n = 1
1%2 = 1, n = 1/2-> n = 0

9 becomes = 1001 (base 2) --> sum of digits = 1+0+0+1 = 2

Similarly if we want to convert it to base 3 -
9%3 = 0, n = 9/3 -> n = 3
3%3 = 0, n = 3/3 -> n = 1
1%3 = 1, n = 1/3-> n = 0

9 = 100 (base 3) --> sum of digits = 1+0+0 = 1
*/