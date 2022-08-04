#include<bits/stdc++.h> 
using namespace std;

// https://takeuforward.org/data-structure/find-minimum-number-of-coins/
typedef vector<int> vi;
typedef vector<string> vst;
class Solution {
public:
    void findMin(int v){
    vi deno= {1,2,5,10, 20, 50, 100, 500, 1000};
    int n = 9;

    vi ans;

    for(int i = n - 1; i >= 0; i--){
        while(v >= deno[i]){
            v-= deno[i];
            ans.push_back(deno[i]);
        }
    }

    for(int i = 0; i < ans.size(); i++)
    cout<<ans[i]<<" ";
    }
};

int main(){
    Solution ss;
    ss.findMin(93);
// vector<int> vec = {};
return 0;
}