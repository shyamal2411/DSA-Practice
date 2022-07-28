#include<bits/stdc++.h> 
using namespace std;

typedef vector<int> vi;
typedef vector<string> vst;

struct meeting{
    int start, end, pos;
};

class Solution {
public:

    bool static compare(struct meeting n, meeting m){
        if(n.end < m.end) return true;
        else if(n.end > m.end) return false;
        else if(n.pos < m.pos) return true;
        return false;
    }

    void maxMeetings(vi s, vi e, int n){
        struct meeting meet[n];

        for(int i = 0; i < n; i++){
            meet[i].start = s[i], meet[i].end = e[i], meet[i].pos = i+1;
        }

        sort(meet, meet+n, compare);
        vi ans;

        int limit = meet[0].end;
        ans.push_back(meet[0].pos);

        for(int i = 0; i < n; i++){
            if(meet[i].start > limit){
                limit = meet[i].end;
                ans.push_back(meet[i].pos);
            }
        }

        for(int i = 0; i < ans.size(); i++){
            cout<< ans[i]<<" ";
        }
    }
};

int main(){
Solution ss;
int n = 6;
vector<int> start = {1,3,0,5,8,5};
vector<int> end = {2,4,5,7,9,9};
ss.maxMeetings(start, end, n);
return 0;
}