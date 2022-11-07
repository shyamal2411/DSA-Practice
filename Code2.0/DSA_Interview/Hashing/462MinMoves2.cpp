#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/minimum-moves-to-equal-array-elements-ii/
#define int long long 
#define nl "\n"
const int M=1e5 + 5;
typedef vector<int> vi;
#define f(i,a,n) for(int i=a;i<n;i++)
#define rf(i,a,n) for(int i=n-1;i>=a;i--)
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cin.tie(0);cout.tie(0);
#define read(arr,n) for(int i=0;i<n;i++)cin>>arr[i];
#define pr(arr,n) for(int i=0;i<n;i++)cout<<arr[i];
#define in cin>>
#define out cout<<
#define umap unordered_map<int, int> mp
#define input int n; cin>>n;
#define inmap for(auto i: mp) mp[i]++;

class Solution {
public:
    int minMoves2(vector<int>& nums) {
//         sort(nums.begin(), nums.end());
//         int moves = 0, med = nums[nums.size()/2];
//         for(auto n: nums) moves += abs(n - med);
        
//         return moves;
        
        sort(begin(nums), end(nums));
        int i=0, j = nums.size()-1, moves = 0;
        
        while(i < j){
            moves += (nums[j] - nums[i]);
            j--, i++;
        }
        return moves;
    }
};

int32_t main(){
    Solution ss;
    input;
    vi nums = {1,2,3};
    cout<<ss.minMoves2(nums);
  
return 0;
}