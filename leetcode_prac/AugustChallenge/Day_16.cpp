#include<bits/stdc++.h>
using namespace std;

class NumArray {
public:
       vector<int> pref = {0};
    NumArray(vector<int> &nums) {
        int sum = 0;
        for (int n : nums) {
            sum += n;
            pref.push_back(sum);
        }
    }

    int sumRange(int i, int j) {
        return pref[j+1] - pref[i];
    }
};

int main()
{
    vector<int> nums = {-2, 0, 3, -5, 2, -1};
    NumArray obj(nums);
    cout<<obj.sumRange(0,2)<<endl;
    cout<<obj.sumRange(2,5)<<endl;
    cout<<obj.sumRange(0,5)<<endl;
    return 0;
}