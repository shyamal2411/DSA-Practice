#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int i,count[26], maxcount=0, subcount=0;
        for(char c: tasks)
            count[c-'A']++;
        for(i=0;i<26;i++)
            maxcount=max(maxcount, count[i]);
        for(i=0;i<26;i++)
            if(count[i]==maxcount)
                subcount++;
        int ans=max((int)tasks.size(), ((maxcount-1)*(n+1)+subcount));
        return ans;
    }
};

int main()
{
    int n=2, tasks[]={'A','A','A','B','B','B'};
    vector<char> v(tasks,tasks+6);
    Solution s;
    int res=s.leastInterval(v,n);
    cout<<res<<endl;
    return 0;
}