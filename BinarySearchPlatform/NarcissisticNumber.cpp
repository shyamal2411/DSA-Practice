#include<bits/stdc++.h> 
using namespace std;

/*
Given an integer n, return whether it is equal to the sum of its own 
digits raised to the power of the number of digits.

Example 1
Input
n = 153
Output
true
Explanation
153 = 1 ** 3 + 5 ** 3 + 3 ** 3

*/

bool solve(int n) {
    int number = n;
    vector<int> allDigits;
    while (n > 0) {
        int digit = n % 10;
        allDigits.push_back(digit);

        n /= 10;
    }

    int numberOfDigits = allDigits.size(), sum = 0;
    for (int i = 0; i < allDigits.size(); i++) sum += pow(allDigits.at(i), numberOfDigits);

    return sum == number;
}

int main(){
    int n;
    cin >> n;
    if (solve(n)) cout << "true" << endl;
    else cout << "false" << endl;
    return 0;
}