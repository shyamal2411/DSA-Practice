#include<bits/stdc++.h> 
using namespace std;

typedef vector<int> vi;
typedef vector<string> vst;

class Solution {
public:
 int maxArea(int h, int w, vector<int>& hCuts, vector<int>& vCuts) {
        
        hCuts.push_back(0);
        hCuts.push_back(h);
        
        vCuts.push_back(0);
        vCuts.push_back(w);
        
        sort(hCuts.begin(),hCuts.end());
        sort(vCuts.begin(),vCuts.end());
        
        long long int l = 0, b = 0;
        
        for(int i=1; i<hCuts.size(); i++){
            if (b < hCuts[i] - hCuts[i-1]){
                b = hCuts[i] - hCuts[i-1];
            }
        }
        for (int i=1; i<vCuts.size(); i++){
            if(l < vCuts[i] - vCuts[i-1]){
                l = vCuts[i] - vCuts[i-1];
            }
        }
        return (l*b)%1000000007;
        
    }
};

int main(){
Solution ss;
vector<int> vec = {};
return 0;
}