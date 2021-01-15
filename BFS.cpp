#include<bits/stdc++.h> 
using namespace std;

void bfs(int g[][7],int start,int n)
{
    int i=start;
    int visited[7]={0}
    cout<<i;
    visited[i]=1;
    enqueue(i);

    while(!is_empty())
    {
        i=dequeue();
        for(int j=1;j<n;j++)
        {
            if(g[i][j]==1 && visited[j]==0)
            {
                cout<<j;
                visited[j]=1;
                enqueue(j);
            }
        }
    }
}

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
    ll int n,k,t,i,p,q,r,s,count=0,j;
    int g[7][7] = {0, 0, 0, 0, 0, 0, 0}, {0, 1, 1, 0, 0, 0, 0},
        {0, 1, 0, 0, 1, 0, 0}, {0, 1, 0, 0, 1, 0, 0}, {0, 0, 1, 1, 0, 1, 1},
        {0, 0, 0, 0, 1, 0, 0}, {0, 0, 0, 0, 1, 0, 0};
    bfs(g, 1, 7);
    return 0;
}