#include<bits/stdc++.h> 
using namespace std;

typedef vector<int> vi;
#define f(i,a,n) for(int i=a;i<n;i++)
#define read(arr,n) for(int i=0;i<n;i++)cin>>arr[i];

constexpr int Maxside=1000;
int tree_pref[Maxside+1][Maxside+1];
int forest[Maxside+1][Maxside+1];

void prefixSum(){
    int i,j,k,n,q;
    cin>>n>>q;
    // int a[n][n];
    // long long pf[n][n];

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            // cin>>a[i][j];
            char a;
            cin>>a;
            forest[i+1][j+1]+=a=='*';
        }
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            tree_pref[i][j]=forest[i][j]+tree_pref[i][j-1];+tree_pref[i-1][j]+tree_pref[i-1][j-1];    
        }
    }
    for(k=0;k<q;k++){
        int w,x,y,z;
        cin>>w>>x>>y>>z;
        cout<<tree_pref[x][z]- tree_pref[w-1][z]
				- tree_pref[x][y-1]
				+ tree_pref[w-1][y-1] << '\n';
    }
}

int main(){
prefixSum();
return 0;
}