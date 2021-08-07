#include<bits/stdc++.h>
using namespace std;

class BrowserHistory {
public:
    // = operator in c++ returning a reference works perfectly here!.

    string stack[5000];
    int p,t; //current point, top in stack
    BrowserHistory(string homepage) {
        stack[p=t=0]=homepage;
    }
    
    void visit(string url) {
        stack[t=++p]=url;
    }
    
    string back(int steps) {
        return stack[p=max(0,p-steps)];
    }
    
    string forward(int steps) {
        return stack[p=min(t,p+steps)];
    }
};

int main(){
    
}