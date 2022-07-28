#include<bits/stdc++.h> 
using namespace std;

typedef vector<int> vi;
typedef vector<string> vst;
class Solution {
public:
  int countPlatforms(vi one, vi depart){
      sort(one.begin(), one.end());
      sort(depart.begin(), depart.end());
    
        int  n = depart.size(), ans = 1, count = 1, i = 1, j = 0;

       while(i<n && j<n)
    {
        if(one[i]<=depart[j]) //one more platform needed
        {
            count++;
            i++;
        }
        else //one platform can be reduced
        {
            count--;
            j++;
        }
        ans=max(ans,count); //updating the value with the current maximum
    }
    return ans;
 }

};

int main(){
Solution ss;
vi one = {900,945,955,1100,1500,1800};
vi depart = {920,1200,1130,1150,1900,2000};
cout<<ss.countPlatforms(one, depart);
return 0;
}