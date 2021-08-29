class Solution {
 public:
  int getSum(int a, int b) {
    // if(b==0){
    //     return a;}
    //  else{
    //      return getSum(a^b,(a&b)<<1);}
    return b == 0 ? a : getSum(a ^ b, (a & b) << 1);
  }
};

/*
    4 2 1
2->   1 0
3->   1 1
----------
5-> 1 0 1 we want this, so we need left shift
& used because we want 1 1  | 0

*/