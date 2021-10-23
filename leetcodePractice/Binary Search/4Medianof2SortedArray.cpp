#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/median-of-two-sorted-arrays/
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size(), n2=nums2.size();
        //n1 will always be smaller
        int low=0, high=n1;
        if(n2<n1)
        return findMedianSortedArrays(nums2, nums1);
        
        while(low<=high)
        {
            //cut1 means how many can you pick from first array
            int cut1=(low+high)>>1; //>>1 means /2
            //cut2 from second array
            int cut2=(n1+n2+1)/2 - cut1;
            
            // if not picking anything from the first arr i.e. cut1, left1 ==INT_MIN, else first index
            int left1=cut1==0 ? INT_MIN :nums1[cut1-1];
            int left2=cut2==0 ? INT_MIN :nums2[cut2-1];
            
            int right1=cut1==n1?INT_MAX :nums1[cut1];
            int right2=cut2==n2?INT_MAX :nums2[cut2];
            
            if(left1<=right2 && left2<=right1){
                if((n1+n2)%2==0)
                    return (max(left1, left2) + min(right1, right2))/2.0;
                else
                    return max(left1, left2);
            }
            else if(left1>right2){
                high=cut1-1;
            }
            else{
                low=cut1+1;
            }
        }
        return 0.0;
    }
};

int main(){
    Solution s;
    vector<int> nums1{1,2};
    vector<int> nums2{3,4};
    cout<<s.findMedianSortedArrays(nums1, nums2)<<endl;
    return 0;
}