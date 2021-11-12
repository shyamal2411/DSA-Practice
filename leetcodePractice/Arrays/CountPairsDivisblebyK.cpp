// C++ Program to count pairs whose sum divisible by '4'
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int count4Divisibiles(int arr[], int n)
    {

        int k = 4;
        vector<int> freq(k, 0);

        for (int i = 0; i < n; i++)
        {
            freq[arr[i] % k]++;
            cout<<freq[arr[i] % k]<<endl;
        }

        int sum = freq[0] * (freq[0] - 1) / 2;

        for (int i = 1; i <= k / 2 and i != (k - i); i++)
        {
            sum += freq[i] * (freq[k - i]);
        }

        if (k % 2 == 0)
        {
            sum += freq[k / 2] * (freq[k / 2] - 1) / 2;
        }
        return sum;
    }
};

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        cout << ob.count4Divisibiles(arr, n) << endl;
    }

    return 0;
} // } Driver Code Ends