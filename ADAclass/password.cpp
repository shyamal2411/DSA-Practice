#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
#define f(i, a, n) for (int i = a; i < n; i++)
#define read(arr, n)            \
    for (int i = 0; i < n; i++) \
        cin >> arr[i];

void permute(string a, int l, int r)
{
    // Base case
    if (l == r)
        cout << a << endl;
    else
    {
        // Permutations made
        for (int i = l; i <= r; i++)
        {

            // Swapping done
            swap(a[l], a[i]);

            // Recursion called
            permute(a, l + 1, r);

            //backtrack
            swap(a[l], a[i]);
        }
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    //  string str = "abcd";
    //     int n = str.size();
    //     permute(str, 0, n-1);

    char inp[] = "abcdefghijklmnopqrstuvwxyz";
    char out[11];
    out[10] = 0;

    int ar[26];
    for (int i = 0; i < 16; i++)
        ar[i] = 0;
    for (int i = 16; i < 26; i++)
        ar[i] = i - 15;

    do
    {
        for (int i = 0; i < 26; i++)
        {
            if (ar[i] != 0)
                out[ar[i] - 1] = inp[i];
        }
        printf("%s\n", out);
    } while (next_permutation(ar, ar + 26));

    return 0;
}