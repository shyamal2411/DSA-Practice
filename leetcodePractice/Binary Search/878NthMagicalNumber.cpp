#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/nth-magical-number/
# define ll long int
class Solution {
public:
    int mod = 1e9 + 7;
  
    int gcd(int a, int b) {
      if (b == 0)
        return a;
      return gcd(b, a%b);
    };
  
    int lcm(int a, int b) {
      return (a * b) / gcd(a, b);
    };
  
    int nthMagicalNumber(int n, int a, int b) {
      ll low, mid, high, target;
      ll lcmOfAB = lcm(a, b);
      
      low = 1;
      high = 1e17;
      
	  /*
	  we will find the target value (n) by selcting the maximum range (i.e. from 1 to 1e17), and in 
	  each step we will check if target value is less than the 'n' or not and accordingly change the 
	  range using binary search approach.
	  */
	  
      while (low < high) {
        mid = (low + high) / 2;
        target = (mid / a) + (mid / b) - (mid / lcmOfAB);
        
		/*
		(mid / a) = no of numbers divisible by 'a' from 1 to mid
		(mid / b) = no of numbers divisible by 'b' from 1 to mid
		(mid / lcm(a, b)) = the numbers those occur two times in (mid / a) + (mid / b), so it is to be subtracted from the sum
		*/
		
		
        if (target < n) {
          low = mid + 1;
        } else {
          high = mid;
        }
      }
      
      return high % mod;
    }
};

/*
(mid / a) = no of numbers divisible by 'a' from 1 to mid
	(mid / b) = no of numbers divisible by 'b' from 1 to mid
	(mid / lcm(a, b)) = the numbers those occur two times in (mid / a) + (mid / b), so it is to be subtracted from the sum
	
	we will find the target value (n) by selcting the maximum range (i.e. from 1 to 1e17), and in 
  each step we will check if target value is less than the 'n' or not and accordingly change the 
  range using binary search approach.
*/

int main(){
    Solution s;
    cout<<s.nthMagicalNumber(5, 2, 4);
    return 0;
}