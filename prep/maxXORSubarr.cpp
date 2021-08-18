#include<bits/stdc++.h> 
using namespace std;

typedef vector<int> vi;
#define f(i,a,n) for(int i=a;i<n;i++)
#define read(arr,n) for(int i=0;i<n;i++)cin>>arr[i];

class Solution{   
public:
    int maxSubarrayXOR(int N, int arr[]){    
        int i,j,ans=0;
        for(i=0;i<N;i++){
            int curXor=0;
            for(j=i;j<N;j++){
                curXor^=arr[j];
                ans=max(curXor, ans);
            }
        }
        return ans;
    }
};

int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        int arr[N];
        read(arr,N);
        Solution Sol;
        cout<<Sol.maxSubarrayXOR(N,arr)<<endl;
    }
    return 0;
}