#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<string> vst;

class Solution
{
    vector<int> ans;
    void Solve(int l, int &k, int num, int digit)
    {
        if (l == 0)
        {
            ans.push_back(num);
            return;
        }
        for (int i = 0; i < 10; i++)
        {
            if (abs(i - digit) == k) //condition
                Solve(l - 1, k, num * 10 + i, i);
        }
    }

public:
    vector<int> numsSameConsecDiff(int n, int k)
    {
        for (int i = 1; i <= 9; i++)
        {
            Solve(n - 1, k, i, i);
        }
        return ans;
    }
};

int main(){
    Solution ss;
    vector<int> n;
    // int num = 2, k = 1;
    n = ss.numsSameConsecDiff(2, 1);
    for(auto i: n)
    cout<<i<<" ";

    return 0;
}