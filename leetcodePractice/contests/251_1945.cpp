#include <iostream>
#include <string>
using namespace std;
//https://leetcode.com/contest/weekly-contest-251/problems/sum-of-digits-of-string-after-convert/

class Solution {
public:
    int getLucky(string s, int k) {
        string temp;
        for(char c: s){
            temp+=to_string(c-'a'+1);
        cout<<temp<<endl;
        }
        int n=0;
        cout<<"\n\n";
        for(char c:temp){
            n+=c-'0';
            cout<<n<<endl;
        }
        for(int i=1;i<k;i++){
            int next=0;
            while(n){
                next+=n%10;
                n/=10;
            }
            n=next;
        }
        return n;
    }
};
// Time: O(n*k)
// Space: O(n)

int main()
{
    string s;
    cin>>s;
    int k;
    cin>>k;
    Solution obj;
    cout<<obj.getLucky(s,k);
    return 0;
}