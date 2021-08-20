#include<bits/stdc++.h> 
using namespace std;

typedef vector<int> vi;
#define f(i,a,n) for(int i=a;i<n;i++)
#define read(arr,n) for(int i=0;i<n;i++)cin>>arr[i];

// https://leetcode.com/problems/min-stack/discuss/1209254/C%2B%2B-Simple-code-with-one-stack
class MinStack {
public:
    vector<pair<int, int>> s;
    MinStack() {
        
    }
    
    void push(int val) {
        if(s.empty())
            s.push_back({val, val});
        else
            s.push_back({val, min(s.back().second,val)});
    }
    
    void pop() {
        s.pop_back();
    }
    
    int top() {
        return s.back().first;
    }
    
    int getMin() {
        return s.back().second;
    }
};

//main function
int main() {
    MinStack ms;
    ms.push(1);
    ms.push(2);
    ms.push(3);
    cout<<ms.getMin()<<endl;
    ms.pop();
    cout<<ms.top()<<endl;
    cout<<ms.getMin()<<endl;
    return 0;
}