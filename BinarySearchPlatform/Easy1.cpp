#include<bits/stdc++.h> 
using namespace std;

/*
Collatz Sequence
Easy

Given a positive integer n, find the length of its Collatz sequence. The Collatz sequence is generated sequentially where

n = n / 2 if n is even
n = 3 * n + 1 if n is odd
And the sequence ends if n = 1
Example 1
Input
n = 11
Output
15
Explanation
The Collatz sequence is: [11, 34, 17, 52, 26, 13, 40, 20, 10, 5, 16, 8, 4, 2, 1] and its length is 15.

*/

int solve(int n) {
    int count = 0;
    //    for(int i = n; i > 1; i--){
    //         if(n%2 == 0){
    //             n/=2; count++;
    //             cout<<n<<" ";
    //         }else{
    //             n = 3*n+1;
    //             count++;
    //             cout<<n<<" ";
    //         }
    //    }
    //    return count;
    if(n == 1)
    return 1;

    if(n % 2 == 0)
     return 1+solve(n/2); 
     else 
     return 1 + solve(3*n+1);
}

int main(){
    int n;
    cin>>n;
    cout<<solve(n);
    return 0;
}