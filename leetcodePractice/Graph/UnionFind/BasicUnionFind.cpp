#include<bits/stdc++.h>
using namespace std;

int find(int u){
    if(u == representative[u])
    return u;
    else
    return find(representative[u]);
}

void combine(int u,int v){
    u = find(u);
    v = find(v);
    if(u == v)
    return;

    else{
        if(size[u] > size[v]){
            representative[v] = u;
            size[u] += size[v];
        }
        else{
            representative[u] = v;
            size[v] += size[u];
        }
    }
}
// Size: O(log n)