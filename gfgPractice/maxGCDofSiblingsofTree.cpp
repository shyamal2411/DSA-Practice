#include <bits/stdc++.h>
using namespace std;

// https://www.geeksforgeeks.org/find-the-maximum-gcd-of-the-siblings-of-a-binary-tree/
int maxGcd(vector<pair<int, int>> &v)
{
    //Single or no child
    if (v.size() == 1 || v.size() == 0)
        return 0;

    sort(v.begin(), v.end());
    pair<int, int> a = v[0]; //To get the first pair
    pair<int, int> b;
    int ans = INT_MIN;
    for (int i = 1; i < v.size(); i++)
    {
        b = v[i];
        //Both pairs belong to same parent 
        if (b.first == a.first)
            ans = max(ans, __gcd(b.second, a.second));
            //update ans with max of current gcd and gcd of both children

        a = b;
        //update previous for next iteration
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        v.push_back(make_pair(a, b));
    }
    cout << maxGcd(v) << endl;
    return 0;
}
/*
INPUT:
7
5 4
5 8
4 6
4 9
8 10
10 20
10 30
*/
