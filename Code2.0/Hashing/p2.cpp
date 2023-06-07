#include <bits/stdc++.h>
using namespace std;

// https://www.geeksforgeeks.org/given-an-array-a-and-a-number-x-check-for-pair-in-a-with-sum-as-x/
typedef vector<int> vi;
typedef vector<string> vst;
class Solution
{
public:
    void printPairs(vi arr, int sum)
    {
        int n = arr.size();
        unordered_set<int> s;

        for (int i = 0; i < n; i++)
        {
            int temp = sum - arr[i];

            if (s.find(temp) != s.end())
                cout << "Pair with given sum " << sum << " is (" << arr[i] << ", " << temp << ")" << endl;

            s.insert(arr[i]);
        }
        cout << "No" << endl;
    }
};

int main()
{
    Solution ss;
    vector<int> vec = {};
    return 0;
}