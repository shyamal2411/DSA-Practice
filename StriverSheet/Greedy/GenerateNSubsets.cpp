// #include <bits/stdc++.h>
// using namespace std;

// // https://takeuforward.org/data-structure/subset-sum-sum-of-all-subsets/
// typedef vector<int> vi;
// typedef vector<string> vst;
// class Solution
// {
// public:
//     vi subsetSum(vi arr, int n)
//     {
//         vi ans;
//         help(0, arr, n, ans, 0);
//         sort(ans.begin(), ans.end());

//         return ans;
//     }

//     void help(int ind, vi &arr, int n, vi &ans, int sum)
//     {

//         if (ind == n)
//         {
//             ans.push_back(sum);
//             return;
//         }

//         // add element
//         help(ind + 1, arr, n, ans, sum + arr[ind]);

//         // don't add
//         help(ind + 1, arr, n, ans, sum); // simply hop on next index
//     }
// };

// int main()
// {
//     Solution ss;
//     vector<int> vec = {};
//     return 0;
// }

#include<bits/stdc++.h> 
using namespace std;

int main(){
    int n;
    cin>> n;
    cout<<"Nityam is lund\n" << n;
    return 0;
}