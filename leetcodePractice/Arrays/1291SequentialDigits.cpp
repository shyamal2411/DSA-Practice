#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/sequential-digits/
class Solution {
private:
    vector<int> seqDigits = {
        12, 23, 34, 45, 56, 67, 78, 89,
        123, 234, 345, 456, 567, 678, 789,
        1234, 2345, 3456, 4567, 5678, 6789,
        12345, 23456, 34567, 45678, 56789,
        123456, 234567, 345678, 456789,
        1234567, 2345678, 3456789,
        12345678, 23456789,
        123456789
    };

    
public:
	vector<int> sequentialDigits(int low, int high) {
		vector<int> seqDigitsInRange;
        for (int n : seqDigits) { // Just check which numbers from the list fit the given range
            if (n > high)
                break;

            if (n >= low)
                seqDigitsInRange.push_back(n);
        }
        return seqDigitsInRange;
	}
};

int main(){
    Solution ss;
    cout<<ss.sequentialDigits(100,300);
    return 0;
}