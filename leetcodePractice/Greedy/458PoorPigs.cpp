#include<bits/stdc++.h> 
using namespace std;

typedef vector<int> vi;
typedef vector<string> vst;

class Solution {
public:
    int poorPigs(int buckets, int poisonTime, int totalTime) {
    return ceil(log(buckets) / log(totalTime / poisonTime + 1));
}

};
int main(){
Solution ss;
 int buckets = 1000, minutesToDie = 15, minutesToTest = 60;
 cout<<ss.poorPigs(buckets, minutesToDie, minutesToTest)<<"\n";
// vector<int> vec = {};
return 0;
}