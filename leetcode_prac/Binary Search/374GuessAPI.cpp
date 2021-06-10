/**
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
 public:
  int guessNumber(int n) {  
    int maxval = n, minval = 1;
    while (true) {
      int mean = (maxval = minval) / 2 + minval;
      int ans = guess(mean);  // API as given in question.
      if (ans == 0)
        return mean;
      else if (ans == 1)
        minval = mean + 1;
      else
        maxval = mean - 1;
    }
  }
};