#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/contest/leetcode-weekly-contest-4/problems/integer-replacement/
class Solution {
public:
    int integerReplacement(int n) {
        int operation = 0;
        if(n == 3) return 2;
        long long nn = n;
        while(nn > 1){
            if(nn % 2 == 0)
                nn /= 2;
            else {
                long long int t = (nn - 1) / 2;
                if(t % 2 == 0)
                    nn -= 1;
                else
                    nn += 1;
            }
            if(nn == 3)
                return nn + operation;
            operation++;
        }
        return operation;
    }
};
/*
We have two operation, divide by two if n is even and increment or decrement by 1 if n is odd. This a greedy solution because wheneven we will encounter an even number we will divide by 2 because it will reduce the number of operation.
We face a problem when n is odd because there are two choices add 1 or minus 1. Solution is we should choose that operation after which we get an even number and dividing it by two is also an even number. Please read the above line carefully then go through this example. Consider we have n=19. Should I add 1 or subtract 1. Let's do both of them.
Subtract 1 we get n=18 which is even divide it by 2 we get 9.
Add 1 we get n=20 which is even divide it by 2 we get 10.
From the above example it is clear that Adding 1 is favourable because after two operation ( add 1 then divide it by 2) we get an even number which can be further divided by 2. On the other hand after subtracting 1 and dividing it by 2 we get an odd number we will have to perform two operation again. So here adding was favourabel or we can say incrementing is favourable.
How should we find out whether we should add 1 or subtract 1. Suppose n is odd and is equal to 2m+1 .previous number is 2m and next number is 2m+2 we can see that both are even.
Dividing both by 2 we get m and m+1, these are consecutive numbers so one of them should be even and then we can proceed.
Exception is there for n=3.

*/

int main(){
    Solution s;
    cout<<s.integerReplacement(19)<<endl;
    return 0;
}