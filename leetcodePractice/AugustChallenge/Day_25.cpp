#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool judgeSquareSum(int c) {
        for(int i=0;i<=sqrt(c);i++){
            int t= sqrt(c-i*i);
            
            if(t*t==c-i*i)
                return true;
        }
        return false;
    }
};
// Time Complexity: O(sqrt(c)Logc)
// Space Complexity: O(1)

//main function
int main()
{
    int c;
    cin>>c;
    Solution ss;
    cout<<ss.judgeSquareSum(c);
    return 0;
}