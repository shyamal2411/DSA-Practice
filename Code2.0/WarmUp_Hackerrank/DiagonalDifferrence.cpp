#include <bits/stdc++.h>
using namespace std;

// https://www.hackerrank.com/challenges/diagonal-difference/problem
#define int long long
#define nl "\n"
const int M = 1e5 + 5;
typedef vector<int> vi;
#define f(i, a, n) for (int i = a; i < n; i++)
#define rf(i, a, n) for (int i = n - 1; i >= a; i--)
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cin.tie(0);                       \
    cout.tie(0);
#define read(arr, n)            \
    for (int i = 0; i < n; i++) \
        cin >> arr[i];
#define pr(arr, n)              \
    for (int i = 0; i < n; i++) \
        cout << arr[i];
#define in cin >>
#define out cout <<
#define first fr
#define second sc

int diagonalDifference(vector<vector<int>> arr)
{

    int ans = 0, left = 0, right = 0;
    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // if(arr[0][j] == arr[j][0]){ans += arr[i][j];}
            if (i == j)
            {
                left += arr[i][j];
            }
            if (i + j == n - 1)
            {
                right += arr[i][j];
            }
        }
    }
    return abs(right - left);
    // if(left > right){ans = left - right;}
    // if(left < right){ans = right - left;}
    // out nl;
    // out nl;
    // for(int j = 0; j < n; j++){
    //     for(int i = n-1; i> 0; i--){
    //         if(i == j){cout<< arr[i][j]<<" ";}
    //     }
    // }
    // return ans;
}

int ddiagonalDifference(vector<vector<int>> arr)
{

    int ans = 0, n = arr.size(), left = 0, right = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                left += arr[i][j];
            if (i + j == n - 1)
                right += arr[i][j];
        }
    }
    return abs(right - left);
}

int32_t main()
{
    int n;
    cin >> n;
    vector<vi> arr(n);
    f(i, 0, n)
    {
        f(j, 0, n) { cin >> arr[i][j]; }
    }
    cout << diagonalDifference(arr);
    return 0;
}