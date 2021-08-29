#include<bits/stdc++.h>
using namespace std;

int maxx(int a, int b){
return (a>b) ? a:b;
}

int knapSackIterative(int W, int wt[], int val[], int n)
{
    //Time compexity: O(n*W)
    //Space compexity: O(n*W)
    int i, w;
      vector<vector<int>> K(n + 1, vector<int>(W + 1));
 
    for(i = 0; i <= n; i++)
    {
        for(w = 0; w <= W; w++)
        {
            if (i == 0 || w == 0)
                K[i][w] = 0;
            else if (wt[i - 1] <= w)
                K[i][w] = max(val[i - 1] + K[i - 1][w - wt[i - 1]], K[i - 1][w]);
            else
                K[i][w] = K[i - 1][w];
        }
    }
    return K[n][W];
}
int knapSackRecursive(int w, int wt[], int val[], int n) {

    if(n == 0 || w == 0)
        return 0;

        if(wt[n-1] > w)
            return knapSackRecursive(w, wt, val, n-1);
            int ans=maxx(val[n-1] + knapSackRecursive(w - wt[n-1], wt, val, n-1), knapSackRecursive(w,wt,val, n-1));
            return ans;
}

int main()
{
    int n, w;
    cin >> n >> w;
    int wt[n], val[n];
    for(int i = 0; i < n; i++)
       cin>>wt[i]>>val[i];

    cout<<knapSackIterative(w,wt,val, n)<<endl;
    return 0;
}
// Time Complexity for recursive: O(2^n). 
// Space Complexity for recursive: O(1).