#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/4sum/
// https://youtu.be/4ggF3tXIAp0
class Solution{
public:

vector<vector<int>> fourSum(vector<int> &nums, int target){
    vector<vector<int>> ans;

    if(nums.empty())
        return ans;
    int n = nums.size();
    sort(nums.begin(), nums.end());

    for(int i = 0;i<n;i++){
        int target_3 = target - nums[i];
        for(int j = i+1; j < n;j++){
            int target2 = target_3 - nums[j];
             //basically, target2 is if 2 numbers are less than target, and 
                // go on finding rest 2 numbers
            int front = j+1;//3rd number - adjcent to 2nd number
            int back = n-1; //4th number - stands at the last of the array
            while(front < back){
                int twoSum = nums[front] + nums[back];
                if(twoSum < target2) front++;// if sum is less than target
                //means value should be greater, so take front- 1 step forward
                else if(twoSum > target2) back--;
                  //if the twoSum is neither big nor small, means we found both the pairs, so add them in vector.
                else{

                    vector<int> quad(4,0); //array to store all 4 elements, if we found our set of elements.
                    quad[0] = nums[i];
                    quad[1] = nums[j];
                    quad[2] = nums[front];
                    quad[3] = nums[back];
                    ans.push_back(quad);
                    //avoiding duplicacy of 3rd element
                    while(front < back && nums[front] == quad[2]) front++;
                    //avoiding duplicacy of 4th element
                    while(front < back && nums[back] == quad[3]) back--;
                }
            }
         //avoiding duplicacy of 2nd element
            while(j+1 < n && nums[j+1] == nums[j]) j++;
        }
         //avoiding duplicacy of 1st element
        while(i+1 < n && nums[i+1] == nums[i]) i++;
    }
    return ans;
    }
};

int main(){
    vector<int> nums = {1, 0, -1, 0, -2, 2};
    int target = 0;
    Solution s;
    vector<vector<int>> ans = s.fourSum(nums, target);
    for(auto i:ans){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}