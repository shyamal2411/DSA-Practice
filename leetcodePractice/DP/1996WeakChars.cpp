#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/the-number-of-weak-characters-in-the-game/
class Solution {
public:
//BETTER APPROACH
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
        sort(properties.begin(), properties.end(), compare);
        int mtn =INT_MIN;
        int i,ans=0;
        
        for(i=properties.size()-1;i>=0;i--){
            if(properties[i][1]<mtn)
                ans++;
            
            mtn=max(mtn, properties[i][1]);
        }
        return ans;
    }
    
    static bool compare(vector<int>& a, vector<int>& b){
        return a[0]==b[0] ? a[1]>b[1] : a[0]<b[0];
    }

    int numberOfWeakCharacters2(vector<vector<int>>& properties) {
         sort(properties.begin(), properties.end());
        int n=properties.size();
        int i,ans=0, 
        a=properties[n-1][0], 
        b=properties[n-1][1], 
        lmax=properties[n-1][1];
       
        for(i=n-2;i>=0;i--){
            if(properties[i][0]<properties[i+1][0]){
                b=max(lmax, b);
                lmax=max(b, properties[i][1]);
            }
            if(properties[i][0]< a && properties[i][1]<b)
                ans++;
        }
        return ans;
    }
};


int main(){
    Solution s;
    vector<vector<int>> properties = {{10,3},{1,10},{5,5}};
    cout<<s.numberOfWeakCharacters(properties);
    return 0;
}