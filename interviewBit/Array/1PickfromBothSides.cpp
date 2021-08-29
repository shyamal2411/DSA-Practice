#include<bits/stdc++.h>
using namespace std;

class  Solution{
public:
int solve(vector<int> &A, int B) {
    if(B > A.size())
        return -1; //base case
    
    int max_val = 0;
    //TAKING PREFIX SUM
    for(int i=0;i<B;i++){
        max_val += A[i];
    }
    
    int j = B-1;
    int ans = max_val;
    for(int i=A.size()-1;i>A.size()-B-1;i--){
        ans = max(ans, max_val - A[j] + A[i]); //taking max of every value
        max_val = max_val - A[j] + A[i];
        j--;
    }
    return ans;
  }

public:
int solve2(vector<int> &A, int B) {
    if(B>A.size())
    return -1;
    int s=0,min=0,i,x;
    int n=A.size()-B;
    for(i=0;i<A.size();i++)
   { 
    s+=A[i];
    if(i<n)
    min+=A[i];}

    if(B==A.size())
    return s;
    x=min;
    
    for(i=0;i<B;i++)
    {x=x+A[i+n]-A[i];
    if(min>x)
    min=x;
    }
    return s-min;   
    }
};

int main()
{
    Solution ss;
    vector<int> A{5, -2, 3 , 1, 2};
    int B;
    cin>>B;
    cout<<ss.solve2(A,B)<<endl;
}

