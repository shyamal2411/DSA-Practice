#include<bits/stdc++.h> 
using namespace std;

// https://www.desiqna.in/check-if-the-given-array-is-subset-of-another-array-hashing-part-4
#define int long long 
#define nl "\n"
const int M=1e5 + 5;
typedef vector<int> vi;
#define f(i,a,n) for(int i=a;i<n;i++)
#define rf(i,a,n) for(int i=n-1;i>=a;i--)
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cin.tie(0);cout.tie(0);
#define read(arr,n) for(int i=0;i<n;i++)cin>>arr[i];
#define pr(arr,n) for(int i=0;i<n;i++)cout<<arr[i];
#define in cin>>
#define out cout<<
// #define first fr
// #define second sc

void solve(){
    vi ar(5), br(3), ans;
    read(ar,5);
    read(br,3);

    unordered_map<int, int> mp, np;
    for(auto i: ar){mp[i]++;}
    for(auto i: br){np[i]++;}

    for(auto i: mp){
        for(auto j: np){
        if(i.first == j.first){
            ans.push_back(i.first);
            }
        }
    }
    if(ans.size() == br.size()){out "Yes\n";}
    else {out "No\n";}
}

bool solve1(){
    int m = 5, n = 3;
    vi arr1(m), arr2(n), ans;
    read(arr1,5);
    read(arr2,3);
    int i = 0, j = 0;
 
    if (m < n)
        return 0;
 
    sort(begin(arr1), end(arr1));
    sort(begin(arr2), end(arr2));
 
    while (i < n && j < m) {
        if (arr1[j] < arr2[i])
            j++;
        else if (arr1[j] == arr2[i]) {
            j++;
            i++;
        }

        else if (arr1[j] > arr2[i])
            return 0;
    }
    return (i < n) ? false : true;
/*Time:  O(mLog(m) + nLog(n))
Space: O(1)*/
}

bool solve2(){
    int m = 5, n = 3;
    vi arr1(m), arr2(n), ans;
    read(arr1,5);
    read(arr2,3);
    set<int> st;
    int i;
    for(int i = 0; i < m; i++){
        st.insert(arr1[i]);
    }

    for(int i = 0; i < n; i++){
        if(st.find(arr2[i]) == st.end()){return false;}
    }
return true;
/*
Time: O(n*logn)
Space: O(n)*/
}

int32_t main(){
    FIO int t; t=1;
    //in t;
    while(t--) cout<<solve2();
  
return 0;
}