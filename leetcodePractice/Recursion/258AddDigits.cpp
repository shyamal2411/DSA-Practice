class Solution {
 public:
  int addDigits(int num) {
    int ans = num % 9;

    if (ans == 0 && num != 0)
      return 9;
    return (ans);
  }
};
// Digital root problem:
// https://www.geeksforgeeks.org/digital-rootrepeated-digital-sum-given-integer/

//         if(num==0)
//             return 0;

//         if(num%10==1 && num%10==9)
//             return num;

//         return (num%10)+(num/10);