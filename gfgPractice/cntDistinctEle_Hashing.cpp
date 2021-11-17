#include <bits/stdc++.h>
using namespace std;

// https://www.geeksforgeeks.org/count-distinct-elements-in-every-window-of-size-k/
// https://practice.geeksforgeeks.org/problems/count-distinct-elements-in-every-window/1#
class Solution{
  public:
   
   vector <int> countDistinct (int A[], int n, int k)
    {
       map<int,int>m;
       vector<int>v;
       int count=0;
       for(int i=0;i<k;i++){
            m[A[i]]++;   
       }
       v.push_back(m.size());
       for(int i=k;i<n;i++){
           if(m[A[count]]==1){
                   m.erase(A[count]);
               }else{
                   m[A[count]]--;
               }
               m[A[i]]++;
               v.push_back(m.size());
               count++;
       }
       return v;
    }

    vector <int> countDistinct2 (int a[], int n, int k)
    {
        unordered_map<int,int>m;
        vector<int>v;
        for(int i=0;i<k;i++)
        m[a[i]]++;
        
        v.push_back(m.size());
        
        for(int i=1;i<=n-k;i++){
            m[a[i-1]]--;         
            if(m[a[i-1]]==0)         
            m.erase(a[i-1]);     
            m[a[i+k-1]]++;      
            
            v.push_back(m.size());
        }
        return v;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) 
        	cin >> a[i];
        Solution obj;
        vector <int> result = obj.countDistinct(a, n, k);
        for (int i : result) 
        	cout << i << " ";
        cout << endl;
    }
    return 0;
} 